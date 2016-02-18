#include <stdio.h>

int main() {
  char buff[256]; 
  int count; int fd = open("./myfile", 2);
  
  printf("fd: %d\n", fd);
  
  lseek(fd, 9, 1); 
  count = read(fd, buff, 3); 
  printf("%c %c %c \ncount: %d\n", buff[0], buff[1], buff[2], count);
  /* holes */

  lseek(fd, 0, 0);
  write(3, "guo", 3);
  
  count = read(fd, buff, 3);
  count = read(fd, buff, 20); 

  printf("%c%c%c\ncount: %d\n", buff[0], buff[1], buff[2], count);
  

  return 0;
}
