// WAP to find sum of n numbers in an array?

#include <stdio.h>
int main()
{
  int size, sum = 0;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the array elements: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("Array elements are : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  printf("Sum of array elements : %d \n", sum);

  return 0;
}