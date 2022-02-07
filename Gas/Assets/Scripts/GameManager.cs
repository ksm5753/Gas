using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;

    #region Scene
    private const string LOGIN = "1. Login";
    private const string LOBBY = "2. Lobby";
    private const string READYROOM = "3. ReadyRoom";
    private const string INGAME = "4. InGame";
    #endregion

    private string asyncSceneName = string.Empty;
    public enum GameState { Login, Lobby, Ready, Start, InGame };
    private GameState gameState;

    public static GameManager GetInstance()
    {
        if(instance == null)
        {
            Debug.LogError("GameManager �ν��Ͻ��� �������� �ʽ��ϴ�.");
            return null;
        }
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        DontDestroyOnLoad(this.gameObject);
    }

    void Start()
    {
        gameState = GameState.Login;
    }

    public void ChangeState(GameState state, Action<bool> func = null)
    {
        gameState = state;
        switch (gameState)
        {
            case GameState.Login:
                break;
            case GameState.Lobby:
                Lobby(func);
                break;
            case GameState.Ready:
                GameReady();
                break;
            case GameState.Start:
                GameStart();
                break;
        }
    }

    private void Lobby(Action<bool> func)
    {
        if (func != null) ChangeSceneAsync(LOBBY, func);
        else ChangeScene(LOBBY);
    }

    private void GameReady()
    {
        print("GameMangaer.cs - GameReady - ���� ���� ���� ����");
        ChangeScene(READYROOM);
    }

    private void GameStart()
    {
        ChangeScene(INGAME);
    }

    //=========================================================================
    private void ChangeScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    private void ChangeSceneAsync(string scene, Action<bool> func)
    {
        asyncSceneName = scene;

        StartCoroutine("LoadScene", func);
    }

    private IEnumerator LoadScene(Action<bool> func)
    {
        var asyncScene = SceneManager.LoadSceneAsync(asyncSceneName);
        asyncScene.allowSceneActivation = true;

        bool isCallFunc = false;
        while (!asyncScene.isDone)
        {
            if (asyncScene.progress <= 0.9f)
                func(false);
            else if (!isCallFunc)
            {
                isCallFunc = true;
                func(true);
            }
            yield return null;
        }
    }
}
