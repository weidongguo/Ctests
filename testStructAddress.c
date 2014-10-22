#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define MY_REG (*(volatile uint8_t*)0x823456789u)

void func(void);

struct Node {
  int val;
  struct Node *nextPtr;
  double stuff; 
  int stuff2;
};

int main()
{
  struct Node head; 
  struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));//dynamically allocated space. should be 8 bytes; 
 
  printf("the allocated memory size is %d\n", sizeof(struct Node));
  head.val = 10;
  head.nextPtr = ptr;
  
  ptr->val = 20;

  printf("%x\n", head.nextPtr);//the allocated memory address
  printf("%x\n", ptr); // the same allocated memory address
  printf("%x\n", &(ptr->val)); // address of the 1st member in the struct
  printf("%x\n", &(ptr->nextPtr)); //address of the 2nd member in the struct
  printf("%x\n", &(ptr->stuff)); // 3rd member 
  printf("%x\n", &(ptr->stuff2)); // 4th member, the addr is advanced by 8 since double is 8 bytes. Again, C is byte-addressable
  
  
  int i = 5;
  int *j = (int*)(5); // forcing this ptr to contain address $5
 
  printf("------------------\n%d\n", i);
  printf("%d\n", &i); //address of the local variable i;
  printf("%d\n", j);
  printf("%d\n", &j); //address of the local variable j;
 

  i = (int)ptr;
  printf("%x\n", i); // i still contains an address of the allocated memory;
  *(int*)i = 25; // directly storing 25 to memory location allocated;
  printf("%d\n", ptr->val); 
  //*((volatile uint8_t*)0x933f018) = 3;
  //*(volatile uint8_t*)0x123456789u = 3;
  //MY_REG = 3;
  //func();
  return 0;
}

void func (void)
{
    *(volatile uint8_t*)0x12345678u = 1; // write
    int var = *(volatile uint8_t*)0x12345678u; // read
}


/* all size of ptrs are 4 bytes since it contains address */



