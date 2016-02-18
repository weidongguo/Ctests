int main(){
  char str[200];
  sprintf(str, "%x", 15);
  int i = 0; 
  for(i = 0 ; i< strlen(str); i++){
    
    printf("%d ", str[i]);
  }

}
