/* Filename:  lstqueue.cpp

   Programmer:  Br. David Carlson

   Date:  August 8, 1998

   Revised:  July 21, 2000

   This file implements the functions of the LstQueClass found in lstqueue.h.
*/

#include "lstqueue.hpp"


/* Given:  Nothing (other than the implicit LstQueClass object).
   Task:   To check whether this object is empty.
   Return: true if it is empty, false otherwise.
*/
bool LstQueClass::Empty(void) const
   {
   return List.Empty();   // Note the use of 2 different Empty functions!
   }


/* Given:  Item   A data item.
   Task:   To insert item into the queue (implicit object) at the rear.
   Return: Nothing directly, but the implicit object is modified.
*/
void LstQueClass::Insert(const ItemType & Item)
   {
   List.InsertRear(Item);
   }


/* Given:  Nothing.
   Task:   To remove the front item from the queue (the implicit object).
   Return: Item   The item removed from the queue.
*/
void LstQueClass::Remove(ItemType & Item)
   {
   Item = List.RemoveFront();   // assumes that = works with this type
   }