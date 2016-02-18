#include <stdio.h>
#include <stdint.h>

int main(){
  int str[20]; 
  char *ptr = str;
  printf("%d %d\n", sizeof(ptr), sizeof(str)); 
  printf("%d %d\n", sizeof(int), sizeof(long long));
  return 0;
}
