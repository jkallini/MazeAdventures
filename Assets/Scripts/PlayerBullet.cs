using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBullet : MonoBehaviour {
    
    public float speed;
    private float damage = 10;

    // Update is called once per frame
    void Update() {
        // move bullet forward
        transform.position += transform.forward * speed * Time.deltaTime;
    }

    void OnTriggerEnter(Collider other) {
        if (other.gameObject.CompareTag("Enemy")) {
            other.GetComponent<EnemyHealth>().Damage(damage);
            Destroy(gameObject);
        }
        Destroy(gameObject);
	}
}
