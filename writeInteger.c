int nrDigits(int i){
  int cnt = 1;
  while( (i = i/10) != 0)
    cnt++;
  return cnt;
}

void writeInteger(int integer){
  int digit;
  if(integer > 0){
    digit = integer % 10;
    integer = integer / 10;
    writeInteger(integer); 
    char ch = digit + '0';
    write(1, &ch, 1);
  }

} /* note when a integer 0 is given, nothing is printed
     and doesn't work for negative number; make make a abs() macro, and use it
     then add - sign in front of the number
     need to improve on this later
  */

void writeInt(int integer){
  if(integer == 0)
    write(1, "0", 1);
  else
    writeInteger(integer);
}

int main(){
  char c = 'a';
  char str[] = "abc";
  write(1, str, 3);
  
  printf("%d\n", -10 % 7);
  writeInt(3211);
  return 0;
}
