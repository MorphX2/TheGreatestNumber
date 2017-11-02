#include<stdio.h>

int main() {
  int x1;
  int x2;
  int x3;
  int max;

  printf("Please enter three numbers: ");
  scanf("%d, %d, %d", &x1, &x2, &x3);

  if ( (x1 > x2 ) && ( x2 > x3 ) ) {
    max = x1;
  } else if ((x1 > x3) && ( x3 > x2 )) {
    max = x1;
  } else if ((x2 > x1) && ( x1 > x2)) {
    max = x2;
  } else if ((x2 > x3) && ( x3 > x1)) {
    max = x2;
  } else if ((x3 > x1) && (x1 > x2)) {
    max = x3;
  } else if ((x3 > x2) && (x2 > x1)) {
    max = x3;
  } else {
    printf("No combinations to evaluate \n");
  }
  printf("The biggest number is: %d \n", max);
  return 0;
}
