#include <stdio.h>

int main() {
  int N;
  int x = 7;
  printf("Number input=");
  scanf("%d", &N);
  
  printf("Your number is %d\n", N);
  
  printf("You %s divide %d with %d\n", (canDivide(N, x) ? "can" : "can''t"), N, x);
  
  return 0;
}

int canDivide(int N, int x) {
  return N % x == 0;
}
