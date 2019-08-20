using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceCamera : MonoBehaviour {

	// Update is called once per frame
	void Update () {
        transform.eulerAngles = new Vector3(-65f, -145f, 0f);
	}
}
