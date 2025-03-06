#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot) {
  // 1. base case

  // if head is null return
  if(!head) {
    smaller = nullptr;
    larger = nullptr;
    return;
  }

  // 2. recursive case

  // save next node before recursion
  Node* next = head->next;

  llpivot(next, smaller, larger, pivot);
  
  // append current node 
  if(head->val <= pivot) {
    head->next = smaller;
    smaller = head;
  }
  else {
    head->next = larger;
    larger = head;
  }

  head = nullptr;
  
}
