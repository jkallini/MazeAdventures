using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InputTextManager : MonoBehaviour {

    public TMP_InputField width;
    public TMP_InputField length;

    public static int mazeRows;
    public static int mazeColumns;

    public void SetText() {

        int num1;
        int num2;
        if (int.TryParse(width.text, out num1) && int.TryParse(length.text, out num2)) {
            if      (num1 > 30) mazeRows = 30;
            else if (num1 < 5)  mazeRows = 5;
            else                mazeRows = num1;

            if      (num2 > 30) mazeColumns = 30;
            else if (num2 < 5)  mazeColumns = 5;
            else                mazeColumns = num2;
        }
        else {
            mazeRows = 5;
            mazeColumns = 5;
        }
    }
}
