using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;

public class Sample05 : MonoBehaviour
{
    [SerializeField]
    private float speed = 1.0f;
    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, speed, 0);

    }
}
