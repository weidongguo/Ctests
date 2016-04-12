#include <stdio.h>
#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

#define PRINTC(c, fmt, ...) printf(c fmt COLOR_RESET, ##__VA_ARGS__)

int main (int argc, char const *argv[]) {

  PRINTC(COLOR_CYAN, "hello world\n");
  PRINTC(COLOR_MAGENTA, "TO be honest, this is dope!\n"); 
 
  return 0;
}
