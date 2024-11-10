// WAP in c to find the maximum and minimum among n elements.
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
int main() {
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);
   int arr[n];
   fill_array(arr, n);
   printf("Generated array: ");
   print_array(arr, n);
   int max = arr[0], min = arr[0];
   for (int i = 1; i < n; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
      if (arr[i] < min) {
         min = arr[i];
      }
   }
   printf("\nMaximum element: %d\nMinimum element: %d\n", max, min);
   return 0;
}
