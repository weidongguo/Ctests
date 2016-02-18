#include <stdio.h>
#include "test.h"

extern int val;
struct hook_entry{
  int number;
  char *name;
};

char* test(){
  val = 10;
  printf("%d\n", val);
  
  struct hook_entry hook[] = { {2, "weidong",}, {3,"guo"} };
  struct hook_entry foo = {11, "ipmandddddddddddddddddd"}; 

  printf("%d\n%s\n%d\n%s\n", hook[0].number, hook[0].name, hook[1].number, hook[1].name);
  printf("%d\n%s\n", sizeof(foo.name), foo.name);
  printf("%x\n", (foo.name));
  
  char *kk = "weidong";
  printf("%6s\n", kk);

  return kk;
}


int main(){
  
  char*ptr= test();
  printf("%s\n",ptr);
  return 0;
}
