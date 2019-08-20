using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceMouse : MonoBehaviour {

    // Update is called once per frame
    void Update() {

        if (PauseMenu.isPaused) return;

        // send a ray from camera to mouse position
        Ray mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition);

        // make camera look in certain direction
        float lookPoint = (Camera.main.transform.position - transform.position).magnitude;
        transform.LookAt(mouseRay.origin + mouseRay.direction * lookPoint);

        // fix the x and z rotation
        transform.rotation = Quaternion.Euler(0, transform.eulerAngles.y, 0);
    }
}
