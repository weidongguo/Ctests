#include <stdio.h>


int main(){
  int val;
  do {
    printf("give me some thing: ");
    scanf("%d", &val);
  }while(val != -1);
  
  return 0;
}
