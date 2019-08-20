using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerController : MonoBehaviour {

    public float moveSpeed;
    public float jumpForce;
    public float gravityScale;

    public CharacterController controller;
    public Transform weapon;
    private Vector3 moveDirection;

    // variables for key collection
    private int keyCount;
    private int roomCount;

    public TMP_Text keyCounter;
    public TMP_Text roomCounter;
    public GameObject roomsCleared;
    public GameObject winText;

    public bool dead = false;
    public bool win = false;

    // vars for keyboard turning
    // public Transform weaponTransform;
    private Vector3 rotationMask; //which axes to rotate around
    public float rotationSpeed; //degrees per second

	private void Start() {
        // Initialize();
	}

	public void Initialize() {

        controller = GetComponent<CharacterController>();
        // floorMask = LayerMask.GetMask("Default");
        rotationMask = new Vector3(0, 1, 0); // set rotation axis
        InitializeText();
	}

	// Set room and key counters
	private void InitializeText() {

        // initialize key count and set key text
        keyCount = 0;
        SetKeyText();

        // find the total number of rooms and set room text
        GameObject maze = GameObject.Find("Maze Generator");
        MazeCreator mazeCreator = maze.transform.GetComponent<MazeCreator>();
        roomCount = mazeCreator.roomCount;

        SetRoomText();
    }

	void FixedUpdate () {

        if (!dead) {
            moveDirection = new Vector3(Input.GetAxisRaw("Horizontal"), moveDirection.y, Input.GetAxisRaw("Vertical"));
            moveDirection.Normalize();

            if (controller.isGrounded) {
                if (Input.GetButtonDown("Jump")) {
                    moveDirection.y = jumpForce;
                }
            }

            RotateWeapon();
        }
	}

	private void Update() {
        if (!dead) {
            moveDirection.y = moveDirection.y + (Physics.gravity.y * gravityScale * Time.deltaTime);
            controller.Move(moveDirection * moveSpeed * Time.deltaTime);
        }

        if (win && Input.GetKeyDown(KeyCode.R)) {
            UnityEngine.SceneManagement.SceneManager.LoadScene(0);
        }
	}

	void RotateWeapon() {
        if (Input.GetButton("RotateWeaponLeft") && Input.GetButton("RotateWeaponRight")) {
            weapon.RotateAround(transform.position, rotationMask, 0f * Time.deltaTime);
        }

        else if (Input.GetButton("RotateWeaponLeft")) { // rotate left 
            weapon.RotateAround(transform.position, rotationMask, -rotationSpeed * Time.deltaTime);
        }

        else if (Input.GetButton("RotateWeaponRight")) { // rotate right 
            weapon.RotateAround(transform.position, rotationMask, rotationSpeed * Time.deltaTime);
        }

    }

	// works for rotating gun but can be awkward 
	/*void RotateWeapon() {
        Ray camRay = Camera.main.ScreenPointToRay(Input.mousePosition);

        RaycastHit floorHit; 

        if (Physics.Raycast(camRay, out floorHit, camRayLength, floorMask)) {
            Vector3 playerToMouse = floorHit.point - transform.position;
            playerToMouse.y = 0f;

            Quaternion newRotation = Quaternion.LookRotation(playerToMouse);
            controller.Move???
        }
    }
    */

	void OnTriggerEnter(Collider other) {

        // Collect keys and increment key count text
        if (other.gameObject.CompareTag("Key")) {
            other.gameObject.SetActive(false);
            keyCount++;
            SetKeyText();
        }

        if (other.gameObject.CompareTag("Goal") && roomCount == 0) {
            winText.SetActive(true);
            win = true;
        }

	}

	void OnTriggerStay(Collider other) {

        // Open doors and decrement key count and room count text
        if (other.gameObject.CompareTag("Closed Door") && Input.GetKeyDown(KeyCode.Return) && (keyCount > 0)) {
            other.gameObject.tag = "Open Door";
            Renderer rend = other.gameObject.transform.parent.GetComponent<Renderer>();
            rend.material.color = Color.grey;
            keyCount--;
            roomCount--;
            SetKeyText();
            SetRoomText();
        }

        if (roomCount == 0) {
            roomsCleared.SetActive(true);
        }
	}

	private void SetKeyText() {
        keyCounter.text = "Keys: " + keyCount.ToString();
    }

    private void SetRoomText() {
        roomCounter.text = "Rooms Remaining: " + roomCount.ToString();
    }

}
