using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InGameUI : MonoBehaviour
{
    private static InGameUI instance;

    public static InGameUI GetInstance()
    {
        if(instance == null)
        {
            Debug.LogError("InGameUI �ν��Ͻ��� �������� �ʽ��ϴ�.");
            return null;
        }

        return instance;
    }

    void Awake()
    {
        if (instance != null) Destroy(instance);
        instance = this;
    }
}
