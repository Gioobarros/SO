#include <stdio.h>

int main() {
  int i, j;
  int a[2][3];
  a[0][0] = 2;
  a[0][1] = 5;
  a[0][2] = -9;
  a[1][0] = -2;
  a[1][1] = 6;
  a[1][2] = 8;
  printf ("Matriz a: \n\n");
  for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
      printf ("%d\t", a[i][j]);
    }
    printf ("\n");
  }
}