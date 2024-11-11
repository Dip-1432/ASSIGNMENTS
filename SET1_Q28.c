// WAP in c to find the sum of odd and even numbers among n elements.
#include <stdio.h>
#include <stdlib.h>
void print_array(int a[], int n) {
   for (int i = 0; i < n; i++)
      printf("%d ", a[i]);
}
void fill_array(int a[], int n) {
   for (int i = 0; i < n; i++)
      a[i] = rand() % 90 +10;
}
int main() {
   int n, sum_odd = 0, sum_even = 0;
   printf("Enter the value of n:\t");
   scanf("%d", &n);
   int arr[n];
   fill_array(arr, n);
   printf("Generated array:\t");
   print_array(arr, n);
   for (int i = 0; i < n; i++) {
      if (arr[i] % 2 == 0)    sum_even += arr[i];
      else  sum_odd += arr[i];
   }
   printf("\nSum of odd numbers: %d\n", sum_odd);
   printf("Sum of even numbers: %d\n", sum_even);
   return 0;
}