// asciidungeon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

#define WALL '#'
#define GOAL '@'
#define PLAYER 'X'

    // # = wall
    // @ = goal
    // X = player 
struct location {
    int x;
    int y;
};

//TODO
// move player when hitting arrow keys
// change the map (or recalculate the map)
// draw the new map 


int main()
{
    location playerLocation;
    location goalLocation;

    //initialize the map
    char map[10][10]{"#########", "#       #", "#       #","#  @    #","#       #","#       #","#       #","#     X #","#########"};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (map[i][j] == PLAYER) {
                playerLocation.x = i;
                playerLocation.y = j;
            }
            if (map[i][j] == GOAL) {
                goalLocation.x = i;
                goalLocation.y = j;
            }
        }
        std::cout << map[i] << "\n";
    }
    std::cout << "Player location: x " << playerLocation.x << " y " << playerLocation.y;
    std::cout << "\nGoal location: x " << goalLocation.x << " y " << goalLocation.y;
    

    //when player moves, change the map to 

    int c = 0;
    while (true) {
        c = 0;
        // receive arrow input
        switch (c = getch()) {
        case KEY_UP: 
            break;
        case KEY_DOWN:
            break;
        case KEY_RIGHT:
            break;
        case KEY_LEFT:
            break;
        default:
            break;
        }
        // process input

        // print the map
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
