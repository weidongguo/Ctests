typedef union{
  char val8[4];
  int  val32[4];

} Union;



int main(){
  Union u;
  u.val32[0] = 0x31323334 ;
  u.val32[1] = 98;
  u.val32[2] = 99;
  u.val32[3] = 100;

  int i ;
  for(i = 0 ; i< sizeof(u.val8); i++)
    printf("%d\n", u.val8[i]);


  return 0;
}
