#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int value;
  struct Node *next;
}Node;

Node* newNode(){
  return malloc(sizeof(Node));
}

void traverse(Node* head){
  while(head->next != NULL){
    printf("%d ", head->value);
    head = head->next;
  }
  printf("%d\n", head->value);
}

void construct(Node* head)
{
  int i;
  head->value = 0;
  Node* currentNode = head->next = newNode();
  currentNode->value = 1;

  for(i=2; i<10; i++){
    currentNode = currentNode->next = newNode(); 
    currentNode->value = i; 
     
  }
  currentNode->next = NULL;
}

void deconstruct(Node *head){
  Node *next;
  while(head != NULL){
     next = head->next;
     free(head);
     head = next;
  }
}

Node* reverse(Node *head){
  Node *pre = NULL, *cur = head, *next;
  while(cur != NULL) {
    next = cur->next; //save the next node so won't lose it when changing the next ptr 
    cur->next = pre;
    pre = cur;
    cur = next;
  }
  return pre; //return the new head ;
}

int main() {
  Node *head;
  head = newNode();
  construct(head);
  traverse(head);
  
  head = reverse(head);
  traverse(head);
  
  deconstruct(head);
  return 0;
}
