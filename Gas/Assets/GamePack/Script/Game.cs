using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Data;
//--------------���� ��Ģ---------------//
// 1. �÷��̾�� ȭ���� ��ġ�ϸ� ������ �� �� ����
// 2. �������� �ڵ��ƺ��� ���� �� ������ �� ��� ����â�� ��
// 3. ������ ������ ª�� �ð��ȿ� Ǯ�����
// 4. ������ ������ ��� ������ ������ְ� �ƴϸ� ������ �״�� ���������(������ Ǫ�� ���ȿ� ��ü�ð��� ������)
// 5. ��ġ�� �ϰ� ���� ��� �������� ���ݾ� ���� �������� Ǯ�� ���� ���� �ܰ�� �Ѿ �ִϸ��̼��� �ٲ�

public class Game : MonoBehaviour
{
    [Header("�پ�� �ð� ����")]
    [SerializeField] float maxTime; // �ִ� �ð�
    [SerializeField] float playTime; // ���� �پ�� �ð�
    [SerializeField] GameObject timeBar; // ũ�Ⱑ �ٲ� ������Ʈ
    [SerializeField] float minusSpeed; // �ð��� ������ ���ǵ�
    [SerializeField] float plusSpeed; // �ð��� ������ ���ǵ�

    [Header("�÷��̾� ���� ���� ����")]
    [SerializeField] float needExp; // ���� ���� �ʿ��� ����ġ��
    [SerializeField] float gainExpSpeed; // ����ġ�� ��� �ӵ�
    [SerializeField] float actProcess; // �÷��̾��� ���� ���� ����ġ ����
    public int actLevel; // ���� �÷��̾��� �ൿ ����
    public int maxActLevel; // �ִ� ����
    [SerializeField] GameObject actBar; // �÷��̾��� ���� ���� ����ġ ��
    [SerializeField] GameObject []students; // �л��� ���� ������Ʈ
    [SerializeField] Sprite[] studentSprite; // �л��� ������ (������ ��������)

    [Header("������ ����")]
    [SerializeField] float[] rotateTimeRange; // �������� ���°� �ٲ�� �ֱ� ����{ 0 : �ּҽð�, 1 : �ִ� �ð�}
    [SerializeField] byte isWatching = 0; // �������� �Ĵٺ����� ����üũ {2 : ������, 1 : �ڵ��� ��, 0 : �ڵ�������}
    [SerializeField] GameObject SpineTeacher; // ������ ������ ������Ʈ

    [Header("����")]
    [SerializeField] Text resultText;
    [SerializeField] Text currentScoreText;
    public float score; // ���� ����
    [SerializeField] GameObject resultWin; // ���â

    [HideInInspector]public bool isPlaying = true; // ���� ������ ���������� {true = ������, false = �Ͻ�����}

    private static Game instance = null;

    private void Start()
    {
        // ù �������� ���º�ȯ �ð� ����
        float turnTime = Random.Range(rotateTimeRange[0], rotateTimeRange[1]);
        Invoke("teacherChange", turnTime);
        if(instance == null)
        {
            instance = this.GetComponent<Game>();
        }
    }

    public static Game Instance
    {
        get
        {
            if (null == instance)
            {
                return null;
            }
            return instance;
        }
    }

    void Update()
    {
        timeManaging();
    }

    void TestLerp(GameObject test)
    {
        test.transform.position = Vector3.Lerp(test.transform.position, new Vector3(300, 300, 300), Time.deltaTime);
    }

    // ���� �������� �Ŵ�¡
    void timeManaging()
    {
        if (isPlaying)
        {
            // �ֵ��Ϳ��� �÷��� ���� ���
            if (Application.isEditor)
            {
                if (Input.GetKeyDown(KeyCode.Mouse0))
                {
                    foreach(GameObject studenObj in students)
                    {
                        studenObj.GetComponent<Image>().sprite = studentSprite[actLevel];
                    }
                }

                if (Input.GetKeyUp(KeyCode.Mouse0))
                {
                    foreach (GameObject studenObj in students)
                    {
                        studenObj.GetComponent<Image>().sprite = studentSprite[4];
                    }
                }

                if (Input.GetKey(KeyCode.Mouse0))
                {
                    touchChecker(true);
                }

                // ������ �ִ� ���°� �ƴ϶��
                else
                {
                    touchChecker(false);
                }
            }

            // �ƴҰ��
            else
            {
                if(Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);

                    if (touch.phase == TouchPhase.Began)
                    {
                        foreach (GameObject studenObj in students)
                        {
                            studenObj.GetComponent<Image>().sprite = studentSprite[actLevel];
                        }
                    }

                    if (touch.phase == TouchPhase.Ended)
                    {
                        foreach (GameObject studenObj in students)
                        {
                            studenObj.GetComponent<Image>().sprite = studentSprite[4];
                        }
                    }

                    if (touch.phase == TouchPhase.Stationary)
                    {
                        touchChecker(true);
                    }
                }

                else
                {
                    touchChecker(false);
                }
            }

            // ���� ũ�� ����
            timeBar.GetComponent<RectTransform>().localScale = new Vector2((playTime / maxTime), 1); // �����ð� ��
            actBar.GetComponent<RectTransform>().localScale = new Vector2((actProcess / needExp), 1); // ����ġ ��
            currentScoreText.text = Mathf.RoundToInt(score) + "0";
        }
    }

    void touchChecker(bool isTouched)
    {
        if (isTouched)
        {
            // ������ �� �ð��� ������ �Ͱ� ���� �������� ����
            playTime += plusSpeed * Time.deltaTime;
            actProcess +=  gainExpSpeed * Time.deltaTime;

            // ���� ������ ���� ������ ���� ����ġ ��� �ӵ� �޶���
            if (actLevel != 0) score += actLevel * Time.deltaTime;
            else score += Time.deltaTime;

            // ���� ����ġ�� �ʿ� ��ġ�� �ʰ��� ���
            if (actProcess > needExp)
            {
                // ���� �ִ� ������ �ƴ� ��� ������ �÷��ְ� ����ġ ��ġ�� 0���� �ٲ���
                if (actLevel < maxActLevel)
                {
                    actLevel += 1;
                    foreach (GameObject studenObj in students)
                    {
                        studenObj.GetComponent<Image>().sprite = studentSprite[actLevel];
                    }
                    actProcess = 0;
                }

                // �ִ� ������ �������� ��� �� �̻����� ���ö󰡰� ������
                else
                {
                    actProcess = needExp;
                }
            }

            // ���� �������� ���� �ִ� ���̶��
            if (isWatching == 2)
            {
                // ������ ��� �����ְ� �������� ���º�ȯ�� �����ش�.
                isPlaying = false;
                CancelInvoke("teacherChange");

                Invoke("EndGame", 0.6f);
            }

            // ���� �ð��� �ִ�ð��� �ʰ��Ұ�� ���̻�� �ö��� ���ϵ��� �����ش�.
            if (playTime >= maxTime)
            {
                playTime = maxTime;
            }
        }

        else
        {
            // �����ð��� ����ġ ��ġ�� ���� ��������.
            playTime -= minusSpeed * Time.deltaTime;
            actProcess -= Time.deltaTime;

            // ���� ����ġ ��ġ�� 0���� ��������
            if (actProcess <= 0)
            {
                //  ���� ������ 0�� �ƴ϶��
                if (actLevel != 0)
                {
                    // ������ �����ְ� ����ġ ��ġ�� �ִ�� ������ش�.
                    actProcess = needExp;
                    actLevel--;
                }

                // ������ 0�̶�� �� ���Ϸ� �������� �ʵ��� �����ش�.
                else
                {
                    actProcess = 0;
                }
            }

            // ���� �ð��� 0���� �۾����ٸ� ���ӿ��� ó������
            if (playTime < 0 && isPlaying)
            {
                isPlaying = false;
                EndGame();
                Debug.Log("���� ����");
            }
        }
    }

    void teacherChange() // �������� ���º���{Invoke �� ��� ���� ������}
    {
        // ���� �ٲ� �ð� üũ
        float turnTime = Random.Range(rotateTimeRange[0], rotateTimeRange[1]);

        // �ڵ��� �ִ� ���¶��
        if (isWatching == 0) 
        { 
            // ���ƺ��� ���� ���·� �ٲ���
            isWatching = 1; 
            SpineTeacher.GetComponent<SoldierT>().Move(1);
            turnTime = turnTime / 2;
        }

        // ���ƺ��� ���� ���¶��
        else if(isWatching == 1)
        {
            // ���ƺ� ���·� �ٲ���
            isWatching = 2;
            SpineTeacher.GetComponent<SoldierT>().Move(2);
        }

        // ���ƺ� ���¶��
        else 
        { 
            // �ڵ��� �ִ� ���·� �ٲ���
            isWatching = 0;
            SpineTeacher.GetComponent<SoldierT>().Move(0);
        }

        // turnTime ���� �ٽ� �� �Լ� ����
        Invoke("teacherChange", turnTime);
    }

    // ���� ���� ��� ó��
    void EndGame()
    {
        resultWin.SetActive(true);
        score = Mathf.RoundToInt(score);
        resultText.text = score.ToString() + "0" + " ��!!";
        isPlaying = false;
        CancelInvoke("teacherChange");
    }

    public void ContinueGame(GameObject reviveBtn)
    {
        float turnTime = Random.Range(rotateTimeRange[0], rotateTimeRange[1]);
        Invoke("teacherChange", turnTime);
        isPlaying = true;
        resultWin.SetActive(false);
        reviveBtn.SetActive(false);
    }
}
