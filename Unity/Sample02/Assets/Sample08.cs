using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sample08 : MonoBehaviour
{
    public GameObject sphere = null;
    //private void Start()
    //{
    //    sphere = GameObject.Find("Sphere");
    //}
    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, 1, 0);
        sphere.transform.Rotate(0, 1, 0);

    }
}
