// WAP in c to print the following pattern.
/*
      A
    A B A
  A B C B A
A B C D C B A
  A B C B A
    A B A
      A
*/
#include <stdio.h>

int main() {
    // printf("\033[32;1m");  // ANSI codes for green color and bold
  int n;
  printf("Enter the number of rows:\n");
  scanf("%d", &n);
  char ch;
    for (int i = 1; i < n * 2; ++i) {
        int limit = (i <= n) ? i : (n * 2 - i);
        //FOR SPACES
      for (int k = n; k > limit; --k) {
            printf("  ");
      }
        //FOR RIGHT TRIANGLES
      ch='A';
      for (int j = 1; j <= limit; ++j) {
            printf("%c ", ch++);
      }
        //FOR LEFT TRIANGLES
      ch-=2;
      for (int j = limit - 1; j >= 1; --j) {
            printf("%c ", ch--);
      }
      printf("\n");
  }
  return 0;
}

