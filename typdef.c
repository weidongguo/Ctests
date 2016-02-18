int main() {
  printf("sizeof(int): %d\n", sizeof(int));
  printf("sizeof(long): %d\n", sizeof(long));
  
  typedef long integer_t;
  printf("sizeof(integer_t):%d \n", sizeof(integer_t));
  return 0;
}
