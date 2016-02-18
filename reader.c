#include <unistd.h>
#include <fcntl.h>

int main()
{
  int fd = open("./notepad1.txt", O_RDONLY);
  char c;
  while(1){
  read(fd, &c,1);
  write(1, &c, 1);
  sleep(1);
  }
  return 0;
}
