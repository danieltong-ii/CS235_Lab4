#include "Pathfinder.h"
#include <string>


string Pathfinder::toString() const {
};
/*
* createRandomMaze
*
* Generates a random maze and stores it as the current maze.
*
* The generated maze must contain a roughly equal number of 1s and 0s and must have a 1
* in the entrance cell (0, 0, 0) and in the exit cell (4, 4, 4).  The generated maze may be
* solvable or unsolvable, and this method should be able to produce both kinds of mazes.
*/
void Pathfinder::createRandomMaze(){
    int maze[5][5][5];
    for (int level = 0 ; level < 5; level++) {
        for (int row = 0; row < 5; row++) {
            for (int column = 0; column < 5; column++) {
                maze[level][row][column] = rand() % 2;
            }
        }
    }
    maze[0][0][0] = 1;
    maze[4][4][4] = 1;
};
//-----------------------------------------------------------------------------------------

//Part 2-----------------------------------------------------------------------------------
/*
* importMaze
*
* Reads in a maze from a file with the given file name and stores it as the current maze.
* Does nothing if the file does not exist or if the file's data does not represent a valid
* maze.
*
* The file's contents must be of the format described above to be considered valid.
*
* Parameter:	file_name
*				The name of the file containing a maze
* Returns:		bool
*				True if the maze is imported correctly; false otherwise
*/
bool Pathfinder::importMaze(string file_name){

    ifstream readIn(file_name);
    string tempString;
    stringstream ss;
    string temp;
    queue <int> numQueue;

    cout << tempString << endl;

    while(getline(readIn,tempString)) {
        istringstream numberImporter(tempString);
        //check for isalpha
        int toNumQueue;
        while(numberImporter >> toNumQueue) {
            numQueue.push(toNumQueue);
        }
    }
    int catchNumQueue = numQueue.size();
    int maze[5][5][5]; //1 1 0 1 0
    for (int a = 0 ; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            for (int c = 0; c < 5; c++) {
                maze[a][b][c] = numQueue.front();
                numQueue.pop();
                }
            }
        }

    for (int a = 0 ; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            for (int c = 0; c < 5; c++) {
                cout << maze[a][b][c];
                }
            cout << endl;
            }
            cout << endl;
        }

    if ((catchNumQueue == 125) && ((maze[0][0][0]) == 1) && ((maze[4][4][4]) == 1)) {
        cout << "return true" << endl;
        return true;
    }
    else {
        cout << "return false" << endl;
        return false;
    }
};
//-----------------------------------------------------------------------------------------

//Part 3-----------------------------------------------------------------------------------
/*
* solveMaze
*
* Attempts to solve the current maze and returns a solution if one is found.
*
* A solution to a maze is a list of coordinates for the path from the entrance to the exit
* (or an empty vector if no solution is found). This list cannot contain duplicates, and
* any two consecutive coordinates in the list can only differ by 1 for only one
* coordinate. The entrance cell (0, 0, 0) and the exit cell (4, 4, 4) should be included
* in the solution. Each string in the solution vector must be of the format "(x, y, z)",
* where x, y, and z are the integer coordinates of a cell.
*
* Understand that most mazes will contain multiple solutions
*
* Returns:		vector<string>
*				A solution to the current maze, or an empty vector if none exists
*/
vector<string> Pathfinder::solveMaze(){

};

bool findPath(int x, int y, int z) {
    return true;
}

questions: 1. no idea what toString should be like; 2. where should I put the vector<string>P, maze class?
