using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sample09 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        var renderer = GetComponent<Renderer>();
        renderer.material.color = new Color(1,0,0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
