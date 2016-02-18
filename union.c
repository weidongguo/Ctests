typedef union { 
  struct {
    char id[10 + 1];
    char pw[8 + 1];
  } profile_info;

  char profile_info_buffer[18+2];    // 10+1+8+1 = 18+2 

}Profile;


/* note that profile_info_buffer shares the same memory location as profile_info occupies */


int main(){
  Profile profile; 

  memcpy(profile.profile_info_buffer, "weidongguo\00019940228\000", 20);
  int i;
  for( i = 0 ;  i < 20; i++){
    printf( "%c", (profile.profile_info_buffer)[i]);
  }
  printf("\n%s, %s\n", profile.profile_info.id, profile.profile_info.pw); 

 

  char *ptr;
  ptr = (char *) &profile.profile_info;
  
  printf("%s", ptr == &profile.profile_info_buffer ? "Yes":"No");


  return 0;
}
