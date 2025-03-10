#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
  //base case
  if(head == NULL){
    smaller = NULL;
    larger = NULL;
    return;
  }
  //create temp to store head
  Node* temp = head->next;
  head->next = NULL;
  //smaller
  if(head->val > pivot){
    larger = head;
    llpivot(temp, smaller, larger->next, pivot);
  }else if(head->val <= pivot){
    //larger
    smaller = head;
    llpivot(temp, smaller->next, larger, pivot);
    
  }
  head = NULL;
}