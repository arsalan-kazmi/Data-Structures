#include<stdio.h>
int main()
{
  int size;
  float sum = 0.0;
  float avg;

  printf("Enter the size of array : ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter array elements : ");
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

  avg = sum/size;
  printf("Average : %f", avg);

  return 0;
}