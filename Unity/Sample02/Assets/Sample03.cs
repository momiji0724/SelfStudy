using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sample03 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        var prefab = Resources.Load<GameObject>
            ("unity-chan!/Unity-chan! Model/Prefabs/unitychan");
        Instantiate(prefab);
    }

}
