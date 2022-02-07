using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StudentPos : MonoBehaviour
{
    // ---------���� ��Ģ-----------
    // 1. �л����� ������ �Ҷ����� å������ �ö󰣴�.
    // 2. ���� ��� �ö󰡱� ���� �ٲ�� ���ڸ����� �ٽ� �ö󰡰ų� ��������,

    [SerializeField] Vector3[] TargetPoses; // ��ǥ ��ġ
    [SerializeField] float changeTime = 0; // ���� �ٲ� �ð�
    [SerializeField]float moveSpeed = 1f; // �������̴� ���ǵ�
    public bool posChecker; // ���� ������ ��� üũ
    [SerializeField] Vector3 currentPos;

    void Start()
    {
        changeCurrentPos();
        TargetPoses[0] = transform.position;
        TargetPoses[1] = TargetPoses[0] + TargetPoses[1];
        TargetPoses[2] = TargetPoses[0] + TargetPoses[2];
    }

    void Update()
    {
        if (Game.Instance.isPlaying)
        {
            posChanager();
            upTime();

            if (Application.isEditor)
            {
                if (Input.GetKeyUp(KeyCode.Mouse0))
                {
                    posChecker = false;
                    changeCurrentPos();
                }

                // ������ �ִ� ���°� �ƴ϶��
                else if (Input.GetKeyDown(KeyCode.Mouse0))
                {
                    posChecker = true;
                    changeCurrentPos();
                }
            }

            // �ƴҰ��
            else
            {
                if (Input.touchCount > 0)
                {
                    Touch touch = Input.GetTouch(0);
                    if (touch.phase == TouchPhase.Stationary)
                    {
                        posChecker = true;
                        changeCurrentPos();
                    }

                    else if (touch.phase == TouchPhase.Canceled)
                    {
                        posChecker = true;
                        changeCurrentPos();
                    }
                }
            }
        }
    }

    public void changeCurrentPos() 
    {
        currentPos = transform.position;
        changeTime = 0;
    }

    public void upTime()
    {
        changeTime += Time.deltaTime * moveSpeed;
    }

    void posChanager()
    {
        if (posChecker)
        {
            if (Game.Instance.actLevel < Game.Instance.maxActLevel)
            {
                transform.position = Vector3.Lerp(currentPos, TargetPoses[1], changeTime);
            }
            else
            {
                transform.position = Vector3.Lerp(currentPos, TargetPoses[2], changeTime);
            }
        }

        else
        {
            transform.position = Vector3.Lerp(currentPos, TargetPoses[0], changeTime);
        }
    }
}
