
// Author: Aiden Buterbaugh
// Date: 11/23/2021
//
// This program does a breadth-first search of a graph.

 
#include "arrqueue.hpp"
#include <string>

#define ROWS 7
#define COLS 7

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
    int tempIndex = 0;



    //set currentVertex equal to startVertex
    currentVertex = startVertex;
    // enqueue the start vertex
    queue.Insert(startVertex);

    // mark the start vertex as visited
    visited[currentVertex] = true;

    // while the queue is not empty
    while(!queue.Empty()){
        //set currentVertex equal to the front vertex
        queue.upNext(startVertex);
        // dequeue the front vertex
        queue.Remove(startVertex);

        // print the front vertex
        std::cout << vertexNames[currentVertex] << "'s ";

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
                tempIndex = startVertex;
                std::cout << "Distance from " << vertexNames[tempIndex] << " to " << vertexNames[i] << " is " << distances[i] << std::endl;
            }
        }
    }
} 

//    {
//    ArrQueClass Queue;
//    float Num;
//    char Choice;

//    Menu();
//    cout << "Enter the letter for your choice: ";
//    Choice = GetChoice();

//    while (Choice != 'Q')
//       {
//       if (Choice == 'I')
//          {
//          cout << "Enter the float to insert into the queue: ";
//          cin >> Num;
//          Queue.Insert(Num);
//          }
//       else if (Choice == 'R')
//          {
//          Queue.Remove(Num);
//          cout << "The number removed was: " << Num << endl;
//          }
//       else if (Choice == 'E')
//          {
//          if (Queue.Empty())
//             cout << "The queue is empty" << endl;
//          else
//             cout << "The queue is not empty" << endl;
//          }
//       else if (Choice != 'Q')
//          cout << "Invalid Choice. You must use I, R, E, or Q." << endl;

//       Menu();
//       cout << "Enter the letter for your choice: ";
//       Choice = GetChoice();
//       }
//    }