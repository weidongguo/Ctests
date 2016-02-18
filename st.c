#include <stdio.h>

#define NEXT_HOLE(h) ( (int*) (*(h+2)) )
#define HOLE_BASE(h) *h
#define HOLE_LEN(h) *(h+1)

struct hole{
  int base;
  int length;
  struct hole *next_hole;
};

void access(int* head){
  printf("%d\n", HOLE_BASE(head));
  printf("%d\n", HOLE_LEN(head));
  printf("%d\n", HOLE_LEN( NEXT_HOLE(head) ));
}

int main(){
  struct hole head;
  struct hole second;
  
  head.base = 0;
  head.length = 10;
  head.next_hole = &second;
  
  second.base = 10;
  second.length = 20; 
  second.next_hole = (hole *)0;

  int * hole_ptr = (int *)(&head);
  access(hole_ptr);
}



