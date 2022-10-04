#include <stdio.h>

int main() {
  int N;
  int x;
  printf("Number N input=");
  scanf("%d", &N);
  printf("Number x input=");
  scanf("%d", &x);
  
  for (int i = N; i <= x; i++) {
    printf("%d.)", i);
    if (i % 2 == 0) {
      printf(" %d is even", i);
    } else {
      printf(" %d is odd", i);
    }
    
    if (i % 3 == 0) {
      printf(", can be divide by 3");
    } else {
      printf(", can't be divide by 3");
    }
    
    if (i % 5 == 0) {
      printf(", can be divide by 5");
    } else {
      printf(", can't be divide by 5");
    }
    
    printf("\n");
  }
  
  int i = x;
  do {
    printf("%d\n", i);
    
    i--;
  } while (i > N);
  
  return 0;
}
