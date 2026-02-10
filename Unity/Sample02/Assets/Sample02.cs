using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sample02 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        cube.transform.Translate(2, 0, 0);
        cube.name = "Cube(Created)";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
