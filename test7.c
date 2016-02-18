#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myatoi(char *str, int base){
  int sum = 0; 
  while( (*str)!='\0' ){
    if(*str < '0' || *str >'9')
      return sum;
    sum = sum * base + *str - '0';
    printf("%d\n", sum);
    str++;
  }
  return sum;
}

void myitoa2(int i, char *buffer){
  if(i<=0){
    *buffer = '\0';
    return;
  }
  int div = i / 10;
  int mod = i % 10;
  myitoa2(div, buffer+1);
  *(buffer) = mod + '0';
  printf("%d", mod);
  
}//T(n) = T(n-1) + c  =  nc = O(n)  , where c = a constant

void myitoa(int integer, char*buffer){
  int tmp, i, j; 
  myitoa2(integer,buffer); //O(n); 
  for(i = 0, j = strlen(buffer) -1; i<=j; i++, j--){//n for loop; and n for strlen
    tmp = buffer[i]; 
    buffer[i] = buffer[j];
    buffer[j] = tmp;
  } // O(2n);
} //O(3n) = O(n) ;

int main(){
  char str[] = "101"; 
  int i= myatoi(str,10);
  printf("%s %d\n", str, i); 
  
  char buffer[20]; 
  
  myitoa(122333,buffer);
  
  printf("\n");
  for(i = 0; i < 6;i++){
    printf("%c", buffer[i]);
  }
  printf("\n%s\n", buffer);
  
  return 0;
}
