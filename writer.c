#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
void print(str)
const char * str; //another way specify types of passed in value
{
  printf("%s\n", str);
}

int main(){
  char filename[] = "notepad5.txt";
  int fd = open(filename, O_WRONLY |O_CREAT|O_APPEND, 0600); 
  fchmod(fd, 0666) ;
  if(fd == -1){
    perror("ERROR");
    return -1;
  } 
  printf("%d\n", 10);
  char c;
  for( c = 'a'; c <='z' ; c++)
     write(fd, &c, 1);
  write(fd, "\n", 1);

  print("weidong");
  execl("/bin/cat", "cat", filename, NULL); 
  return 0;
}
