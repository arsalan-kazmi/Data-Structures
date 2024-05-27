// WAP to display only even numbers in an array?

#include <stdio.h>
int main()
{
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the array elements: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Array elements are : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  printf("Even numbers in array : ");
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}