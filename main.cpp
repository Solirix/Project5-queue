
// Author: Aiden Buterbaugh
// Date: 11/23/2021
//
// This program does a breadth-first search of a graph.

 
#include "arrqueue.hpp"
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



return 0;
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