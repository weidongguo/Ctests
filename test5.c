#include <stdio.h>

int main(){
  char str[100]; 
  sprintf(str, "%lf", 12.34); 
  printf("%s\n", str);
  return 0;
}
