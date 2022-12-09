
// Author: Aiden Buterbaugh
// Date: 11/23/2021
//
// This program does a breadth-first search of a graph.

 
#include "arrqueue.hpp"
#include <string>

#define ROWS 7
#define COLS 7

void userChoice(int userInput);
void breadthFirstSearch(int graph[ROWS][COLS], std::string vertexNames[7], ItemType startVertex);

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


    std::cout << "Enter a number between 0 and 6 to start the breadth first search: \n";
    std::cout << "0 = joe, 1 = eva, 2 = taj, 3 = chen, 4 = lily, 5 = jun, 6 = ken\n";
    std::cin >> userInput;


    // while (!queue.Empty()) {
        
    //     queue.Insert(userInput);
    //     queue.Remove(userInput); 
    // }




userChoice(userInput);

breadthFirstSearch(graph, vertexNames, userInput);



return 0;
}

void breadthFirstSearch(int graph[ROWS][COLS], std::string vertexNames[7], ItemType startVertex){
    // create a queue and current vertex variable
    ArrQueClass queue;
    int currentVertex = 0;
    //array of distances between vertices
    int distances[ROWS] = {0, 0, 0, 0, 0, 0, 0};
    // create a visited array
    bool visited[7] = {false}; 

    

    //set currentVertex equal to startVertex
    currentVertex = startVertex;
    // enqueue the start vertex
    queue.Insert(startVertex);

    //startVertex has a distance of 0 from iteslf
    distances[currentVertex] = 0;

    // mark the start vertex as visited
    visited[currentVertex] = true;

    // while the queue is not empty
    while(!queue.Empty()){
        //set currentVertex equal to the front vertex
        queue.upNext(startVertex);
        // dequeue the front vertex
        queue.Remove(startVertex);

        

        // for each vertex adjacent to the front vertex
        for(int i = 0; i < ROWS; i++){
            // if the vertex is not visited
            if(graph[currentVertex][i] == 1 && visited[i] == false){
                // enqueue the vertex
                queue.Insert(i);

                // mark the vertex as visited
                visited[i] = true;

                // distance between the new vertex and the start vertex
                distances[i] = distances[currentVertex] + 1; 
                std::cout << "Distance from " << vertexNames[startVertex] << " to " << vertexNames[i] << " is " << distances[i] << std::endl;

                // output vertices 2 away from the start vertex
                if(distances[i] == 2){
                    std::cout << vertexNames[i] << " is 2 away from " << vertexNames[startVertex] << std::endl;
                }
            }
        }
    }
} 

void userChoice(int userInput) {
    switch (userInput) {
        case 0:
            std::cout << "Searching for nodes adjacent to joe and calculating distance...\n";
            break;
        case 1:
            std::cout << "Searching for nodes adjacent to eva and calculating distance...\n";
            break;
        case 2:
            std::cout << "Searching for nodes adjacent to taj and calculating distance...\n";
            break;
        case 3:
            std::cout << "Searching for nodes adjacent to chen and calculating distance...\n";
            break;
        case 4:
            std::cout << "Searching for nodes adjacent to lilly and calculating distance...\n";
            break;
        case 5:
            std::cout << "Searching for nodes adjacent to jun and calculating distance...\n";
            break;
        case 6:
            std::cout << "Searching for nodes adjacent to ken and calculating distance...\n";
            break;
        default:
            std::cout << "Invalid input\n";
            break;
    }
}