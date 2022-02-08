using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Protocol;

public class InputManager : MonoBehaviour
{
    private bool isMove = false;

    void Start()
    {
        GameManager.InGame += ANG;
    }

    void ANG()
    {
        int keyCode = 0;
        isMove = false;


    }
}
