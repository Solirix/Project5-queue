/* Filename: list.h

   Programmer:  Br. David Carlson

   Date:  October 7, 1997

   Modified:  August 8, 1998.

   This is the header file to accompany list.cpp.  Together the 2 files
   supply ListClass as shown below.
*/

#include "listnode.hpp"


class ListClass
   {
   private:
      ListNodePtr GetNode(const ItemType & Item,
         ListNodePtr NextPtr = NULL);
      void FreeNode(ListNodePtr NodePtr);
      void ClearList(void);
      // Next 3 are sometimes made into protected fields:
      ListNodePtr Front, Rear;
      int Count;
   public:
      //  constructor:
      ListClass(void);
      //  destructor:
      ~ListClass(void);
      int NumItems(void) const;
      bool Empty(void) const;
      void InsertFront(const ItemType & Item);
      void InsertRear(const ItemType & Item);
      void InsertInOrder(const ItemType & Item);
      ItemType RemoveFront(void);
      ListNodePtr Find(const ItemType & Item) const;
   };
