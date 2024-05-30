#include <stdio.h>
int main()
{
  int n; // Number of terms of Fibonacci series to print

  // Initialize term 1 and term 2
  int t1 = 0, t2 = 1;

  // Initialize next term by adding term 1 and term 2
  int nextTerm = t1 + t2;

  printf("Enter the number of terms you want to print : ");
  scanf("%d", &n);

  // Print first two terms which is always 0 and 1
  printf("Fibonacci series : %d %d ", t1, t2);

  // Print 3rd to nth term using loop
  for (int i = 3; i <= n; i++)
  {
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}