/* Filename:  lstqueue.h

   Programmer:  Br. David Carlson

   Date:  April 13, 1998

   Revised:  March 15, 2014 to not use an abstract base class.

   This is the header file to accompany LstQueue.cpp.  They provide the
   LstQueClass, a list-based implementation of a queue.
*/

#include "list.hpp"


class LstQueClass
   {
   public:
      // No constructor is mentioned here.  We instead use the default
      // constructor automatically supplied by the compiler.
      bool Empty(void) const;
      void Insert(const ItemType & Item);
      void Remove(ItemType & Item);
   private:
      ListClass List;   // an embedded List object
   };
