using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sample07 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var h = Input.GetAxis("Horizontal");
        transform.Rotate(0,h,0);
    }
}
