#include <stdio.h>
#include <stdlib.h>
void print_array(int a[], int n) {
   for (int i = 0; i < n; i++) {
      printf("%d ", a[i]);
   }
}
void fill_array(int a[], int n) {
   for (int i = 0; i < n; i++) {
      a[i] = rand() % 90 +10;
   }
}