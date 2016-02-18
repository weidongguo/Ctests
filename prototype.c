#include <stdio.h>
#define _PROTOTYPE(function, params) function params

_PROTOTYPE(void print, (int i, int j)); /* minix's way of using macro to write 
                                    void print(int i, int j); */

int main(){
  print(12, 13);
  return 0;
}

void print(int i,int j){
  printf("%d\n%d\n", i,j);
}
