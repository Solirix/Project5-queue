
// Author: Aiden Buterbaugh
// Date: 11/23/2021
//
// This program does a breadth-first search of a graph.

#include <iostream>
#include <string>

#define ROWS 7
#define COLS 7

void breadthFirstSearch(int graph[ROWS][COLS], std::string vertexNames[7], int startVertex);

int main(void){
    int userInput = 0;

    // create a 2D graph of names and their connections
    int graph[ROWS][COLS] = {
        {0, 1, 1, 0, 0, 0, 0},
        {1, 0, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 1, 0, 0},
        {0, 0, 1, 0, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 0},
        {0, 0, 0, 1, 1, 0, 1},
        {0, 0, 0, 0, 0, 1, 0}
    };

    std::string vertexNames[7] = {"joe", "eva", "taj", "chen", "lily", "jun", "ken"};






    // print the graph
    // std::cout << "Graph:" << std::endl;
    // for(int i = 0; i < ROWS; i++){
    //     for(int j = 0; j < COLS; j++){
    //         std::cout << graph[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }

return 0;
}

// create a breadth first search with the linked list

