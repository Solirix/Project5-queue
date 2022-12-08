
// Author: Aiden Buterbaugh
// Date: 11/23/2021
//
// This program does a breadth-first search of a graph.

#include <cctype>      // for the tolower function
#include "arrqueue.hpp"


/* Given:  Nothing.
   Task:   To present a menu of available options on screen.
   Return: Nothing.
*/
void Menu(void)
   {
   cout << endl << "Menu of available Queue options:" << endl;
   cout << "   I   Insert an item" << endl;
   cout << "   R   Remove an item" << endl;
   cout << "   E   Check if queue is empty" << endl;
   cout << "   Q   Quit" << endl << endl;
   }


/* Given:  Nothing.
   Task:   To read a letter from the keyboard indicating the
           user's choice.
   Return: This letter (in upper case) in the function name.
*/
char GetChoice(void)
   {
   char Temp;

   cin >> Temp;
   Temp = toupper(Temp);
   return Temp;
   }


int main(void)
   {
   ArrQueClass Queue;
   float Num;
   char Choice;

   Menu();
   cout << "Enter the letter for your choice: ";
   Choice = GetChoice();

   while (Choice != 'Q')
      {
      if (Choice == 'I')
         {
         cout << "Enter the float to insert into the queue: ";
         cin >> Num;
         Queue.Insert(Num);
         }
      else if (Choice == 'R')
         {
         Queue.Remove(Num);
         cout << "The number removed was: " << Num << endl;
         }
      else if (Choice == 'E')
         {
         if (Queue.Empty())
            cout << "The queue is empty" << endl;
         else
            cout << "The queue is not empty" << endl;
         }
      else if (Choice != 'Q')
         cout << "Invalid Choice. You must use I, R, E, or Q." << endl;

      Menu();
      cout << "Enter the letter for your choice: ";
      Choice = GetChoice();
      }

   return 0;
   }




















// #include <iostream>
// #include <string>

// #define ROWS 7
// #define COLS 7

// void breadthFirstSearch(int graph[ROWS][COLS], std::string vertexNames[7], int startVertex);

// int main(void){
//     int userInput = 0;

//     // create a 2D graph of names and their connections
//     int graph[ROWS][COLS] = {
//         {0, 1, 1, 0, 0, 0, 0},
//         {1, 0, 0, 0, 1, 0, 0},
//         {1, 0, 0, 1, 1, 0, 0},
//         {0, 0, 1, 0, 0, 1, 0},
//         {0, 1, 1, 0, 0, 1, 0},
//         {0, 0, 0, 1, 1, 0, 1},
//         {0, 0, 0, 0, 0, 1, 0}
//     };

//     std::string vertexNames[7] = {"joe", "eva", "taj", "chen", "lily", "jun", "ken"};






//     // print the graph
//     // std::cout << "Graph:" << std::endl;
//     // for(int i = 0; i < ROWS; i++){
//     //     for(int j = 0; j < COLS; j++){
//     //         std::cout << graph[i][j] << " ";
//     //     }
//     //     std::cout << std::endl;
//     // }

// return 0;
// }

// // create a breadth first search with the linked list

