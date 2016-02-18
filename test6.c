typedef enum TriState{
  Low,
  High,
  Disconnected,
} TriState;


int main(){
  printf("hello world\n");
  
  TriState s = Disconnected; 
  printf("%d\n", s);

  return 0;
}
