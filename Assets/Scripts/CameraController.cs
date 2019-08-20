using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public Transform target;
    public Vector3 offset;
    public bool useOffsetValues;
    public float rotateSpeed;


    // Use this for initialization
	void Start () {

        if (!useOffsetValues) {
            offset = target.position - transform.position;
        }
        else {
            offset += new Vector3(30f, -120f, 40f); // how to set ofset?
        }


	}
	
	// Update is called once per frame
    void LateUpdate () {
        
        //float horizontal = Input.GetAxis("Mouse X") *rotateSpeed;
        //target.Rotate(0f, horizontal, 0f);

        transform.position = target.position - offset;
        transform.LookAt(target);
	}
}
