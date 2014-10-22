#include <stdio.h>
#include <setjmp.h>

int main() {
  
  int i = 0; 
  jmp_buf env; //env is of Array type b/c we don't need the & operator to refer toit

  printf("for env\n");
  int j = setjmp(env); // didn need &env, env is an array
  /* stores the envionment info to env, and return 0 if setjmp was called 
   * naturally, return 1 if it was from a longjmp() back to setjmp(). we can 
   * think of that,  
   * inside longjmp() there is another jump to setjmp(), so there is a return from
   * setjmp at the end, but the returned value is 1 now*/

  printf("for setjmp()\n"); 
  printf(">> here! %d\n", j);
  i++;
  if(i == 5)
    return 0; 

  
  longjmp(env, j);

  return 0;



}
