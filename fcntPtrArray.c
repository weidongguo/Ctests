#include <stdio.h>
#define NCALLS 2
int foo1(int i, int j){
  printf("foo1\n%d\n%d\n", i, j);
  return 0;
}

int foo2(int i){
  printf("foo2\n%d\n",i);
  return 0;
}

int (*print[])() = {foo1,foo2};
/* return type of the fuction ptr has to match with the actual 
 * Thus, all function pointers should have the same return type in a
 * function pointers array */

int main(){
  int i; 
  for(i =0; i < NCALLS; i++){
    (print[i])(1,2);
  }
  return 0;
}
