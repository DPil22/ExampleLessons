#include <stdio.h>

int main() {
  int N;
  int x;
  printf("Number N input=");
  scanf("%d", &N);
  printf("Number x input=");
  scanf("%d", &x);
  
  printf("Your number is %d, which is %s\n", N, isEven(N) ? "even" : "odd");
  
  printf("You %s divide %d with %d\n", canDivide(N, x) ? "can" : "can''t", N, x);
  
  return 0;
}

int canDivide(int N, int x) {
  return N % x == 0;
}

int isEven(int N) {
  return N % 2 == 0;
}
