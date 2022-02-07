using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Protocol;
using BackEnd;
using BackEnd.Tcp;

public class WorldManager : MonoBehaviour
{
    private static WorldManager instance;
    private const int START_COUNT = 3;

    private SessionId myPlayerIndex = SessionId.None;

    #region Player
    public GameObject playerPool;           //플레이어 넣을곳
    public GameObject playerPrefab;         //플레이어 프리팹
    public int numOfPlayer = 0;
    private const int MAX_PLAYER = 4;
    public int alivePlayer { get; set; }
    private Dictionary<SessionId, Player> players;
    public GameObject startPointObject;
    private List<Vector3> startingPoints;

    private Stack<SessionId> gameRecord;

    #endregion

    void Awake()
    {
        instance = this;
    }

    void Start()
    {
        InitializeGame();

        var matchInstance = BackendMatchManager.GetInstance();
        if (matchInstance == null) return;
        if (matchInstance.isReconnectProcess)
        {
            //InGameUI.GetInstance().SetStartCount(0, false);
            //InGameUI.GetInstance()
        }
    }

    /*
     * 플레이어 설정
     * 게임 상태 함수 설정
     */
    public bool InitializeGame()
    {
        if (!playerPool)
        {
            print("WorldManager.cs - InitializeGame - Player Pool Not Exist!");
            return false;
        }
        print("WorldManager.cs - InitializeGame - 게임 초기화 진행");
        gameRecord = new Stack<SessionId>();



        myPlayerIndex = SessionId.None;
        SetPlayerAttribute();
        GameStart();
        return true;
    }

    public void SetPlayerAttribute()
    {
        //시작점
        startingPoints = new List<Vector3>();

        int num = startPointObject.transform.childCount;
        for(int i = 0; i < num; i++)
        {
            var child = startPointObject.transform.GetChild(i);
            Vector3 point = child.transform.position;
            startingPoints.Add(point);
        }
    }

    public void GameStart()
    {
        if(BackendMatchManager.GetInstance() == null)
        {
            return;
        }

        if (BackendMatchManager.GetInstance().IsHost())
        {
            print("WorldManager.cs - GameStart - 플레이어 세션정보 확인");

            if (BackendMatchManager.GetInstance().IsSessionListNull())
            {
                print("WorldManaer.cs - GameStart - Player Index Not Exist!");
                //호스트 기준 세션데이터가 없으면 게임을 바로 종료한다.
                foreach(var session in BackendMatchManager.GetInstance().sessionIdList)
                {
                    //세션 순서대로 스택에 추가
                    gameRecord.Push(session);
                }

                GameEndMessage gameEndMessage = new GameEndMessage(gameRecord);
                BackendMatchManager.GetInstance().SendDataToInGame<GameEndMessage>(gameEndMessage);
                return;
            }
        }
        SetPlayerInfo();
    }

    public void SetPlayerInfo()
    {
        if(BackendMatchManager.GetInstance().sessionIdList == null)
        {
            //현재 세션 ID리스트가 존재하지 않으면, 0.5초 후 다시 실행
            Invoke("SetPlayerInfo", 0.5f);
            return;
        }

        var gamers = BackendMatchManager.GetInstance().sessionIdList;
        int size = gamers.Count;
        if(size <= 0)
        {
            print("WorldManager.cs - SetPlayerInfo - No Player Exist!");
            return;
        }
        if(size > MAX_PLAYER)
        {
            print("WorldManager.cs - SetPlayerInfo -   Player Pool Exceed");
            return;
        }

        players = new Dictionary<SessionId, Player>();
        BackendMatchManager.GetInstance().SetPlayerSessionList(gamers);

        int index = 0;
        foreach(var sessionId in gamers)
        {
            GameObject player = Instantiate(playerPrefab, new Vector3(startingPoints[index].x, startingPoints[index].y, startingPoints[index].z), Quaternion.identity, playerPool.transform);
            players.Add(sessionId, player.GetComponent<Player>());

            if (BackendMatchManager.GetInstance().IsMySessionId(sessionId))
            {
                myPlayerIndex = sessionId;
                players[sessionId].Initialize(true, myPlayerIndex, BackendMatchManager.GetInstance().GetNickNameBySessionId(sessionId));
            }
            else
            {
                players[sessionId].Initialize(false, sessionId, BackendMatchManager.GetInstance().GetNickNameBySessionId(sessionId));
            }
            index += 1;
        }
        print("WorldManager.cs - SetPlayerInfo - Num Of Current Player : " + size);
    }
}
