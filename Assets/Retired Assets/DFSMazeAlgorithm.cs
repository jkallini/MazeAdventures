using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DFSMazeAlgorithm : MazeAlgorithm {

    public DFSMazeAlgorithm(MazeCell[,] mazeCells) : base(mazeCells) {
    
    }

    public override void CreateMaze() {
        RecursiveBackTracking(0, 0);
    }

    private void RecursiveBackTracking(int row, int column) {
        mazeCells[row, column].visited = true;

        if (!RouteStillAvailable(row, column)) return;

        //int direction = ProceduralNumberGenerator.GetNextNumber ();
        while (RouteStillAvailable(row, column))
        {
            int direction = Random.Range(1, 5);

            if (direction == 1 && CellIsAvailable(row - 1, column))
            {
                // North
                DestroyWallIfItExists(mazeCells[row, column].northWall);
                DestroyWallIfItExists(mazeCells[row - 1, column].southWall);
                RecursiveBackTracking(row - 1, column);
            }
            if (direction == 2 && CellIsAvailable(row + 1, column))
            {
                // South
                DestroyWallIfItExists(mazeCells[row, column].southWall);
                DestroyWallIfItExists(mazeCells[row + 1, column].northWall);
                RecursiveBackTracking(row + 1, column);
            }
            if (direction == 3 && CellIsAvailable(row, column + 1))
            {
                // East
                DestroyWallIfItExists(mazeCells[row, column].eastWall);
                DestroyWallIfItExists(mazeCells[row, column + 1].westWall);
                RecursiveBackTracking(row, column + 1);
            }
            if (direction == 4 && CellIsAvailable(row, column - 1))
            {
                // West
                DestroyWallIfItExists(mazeCells[row, column].westWall);
                DestroyWallIfItExists(mazeCells[row, column - 1].eastWall);
                RecursiveBackTracking(row, column - 1);
            }
        }

    }

    /*private bool UpRouteAvailable(int row, int column) {
        if (row > 0 && !mazeCells[row - 1, column].visited) {
            return true;
        }
        else return false;
    }

    private bool DownRouteAvailable(int row, int column) {
        if (row < mazeRows - 1 && !mazeCells[row + 1, column].visited) {
            return true;
        }
        else return false;
    }

    private bool LeftRouteAvailable(int row, int column) {
        if (column > 0 && !mazeCells[row, column - 1].visited) {
            return true;
        }
        else return false;
    }

    private bool RightRouteAvailable(int row, int column) {
        if (column < mazeColumns - 1 && !mazeCells[row, column + 1].visited) {
            return true;
        }
        else return false;
    }
*/
    private bool RouteStillAvailable(int row, int column) {

        if (row > 0 && !mazeCells[row - 1, column].visited) {
            return true;
        }

        if (row < mazeRows - 1 && !mazeCells[row + 1, column].visited) {
            return true;
        }

        if (column > 0 && !mazeCells[row, column - 1].visited) {
            return true;
        }

        if (column < mazeColumns - 1 && !mazeCells[row, column + 1].visited) {
            return true;
        }

        return false;
    }


    private bool CellIsAvailable(int row, int column)
    {
        if (row >= 0 && row < mazeRows && column >= 0 && column < mazeColumns && !mazeCells[row, column].visited) {
            return true;
        }
        else return false;
    }

    private void DestroyWallIfItExists(GameObject wall)
    {
        if (wall != null)
        {
            GameObject.Destroy(wall);
        }
    }
}
