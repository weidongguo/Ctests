#include <stdio.h>
#include <string.h>

int main(){
  const char str[] = "WEIDONG*GUO*TEACHING*ECS";
  int len = strlen(str), i; 
  const char strr3[] = "LINKED*IN*IS*GREAT"; 
  char *strr = strr3; 
  for(i = 0 ; i< len; i++){
    printf("%d ", str[i]);
  }
  //printf("\n%d\n%d\n", sizeof(strr3), strlen(strr));
  
  
  printf("%s\n", str);  
  char* ptr;
  /*ptr = strtok(str, "*");
  printf("%s  %s\n",str, ptr);
  while(ptr!=NULL){
    ptr = strtok(NULL, "*");
    printf("%s  %s\n",str, ptr);
  }
  strr[3] = '\0'; 
  
  ptr = strtok(strr, "*");//it remembers the first location of token 
  printf("%s  %s\n",strr, ptr);
  
   ptr = strtok(strr, "*");//it remembers the first location of token 
  printf("%s  %s\n",strr, ptr);
  
  ptr = strtok(NULL,"*");
  printf("%s  %s\n", strr, ptr); 
 
  
  for(i = 0 ; i< len; i++){
    printf("%2d ", str[i]);
  }
  return 0; */
}
