#include <stdio.h>

int main()
{
  int matrix[4][4], i, j;
  for(i = 0; i < 4; i++){
    for( j = 0; j<4; j++){
      printf("%x\n", (matrix+i));
      printf("%x\n", (int)(*(matrix+i) + j) / 4);
      printf("%x\n", (int)(matrix[i]+j)/ 4 );
      printf("%x\n\n", (int)(&matrix[i][j])/ 4 );

    }
  }


  int arr[4];
  printf("array\n");
  for(i = 0; i < 4; i++){
    printf("1: %x\n", arr+i);
    printf("2: %x\n", &arr+i);
  }

}
