#include <stdio.h>

struct Profile{
  char username[50];
  char password[50]; 
};

#define ADD(x,y) \
  ({  int sum;          \
      sum = x + y; \
      sum;\
  })

int main(argc, argv)
  int argc;
  char *argv[];
{

  struct Profile p = { .password = "hello", .username = "weidong"};
  
  int s = ADD(3,5);

  int s2 =  ({
    int sum = 3+9;
    sum;
  });

  printf("%d, \xA%d\n", s, s2);
  
  return 0;
}
