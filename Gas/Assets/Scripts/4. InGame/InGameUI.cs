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
            Debug.LogError("InGameUI 인스턴스가 존재하지 않습니다.");
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
