// WAP to delete a given element from an array?

#include <stdio.h>
int main()
{
  int size, item, index;

  printf("Enter the size of the array :");
  scanf("%d", &size);

  int arr[size];

  // Scanning array elements from the user
  printf("Enter array elements : ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Before deletion : ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\nEnter the element to delete : ");
  scanf("%d", &item);

  // Checking if the item is present in the array or not
  if (item > size)
  {
    printf("Item not found.");
  }
  else
  {

    for (int i = 0; i < size; i++)
    {
      if (arr[i] == item)
      {
        index = i;
        break;
      }
    }
    size -= 1;

    for (int i = index; i < size; i++)
    {
      arr[i] = arr[i + 1];
    }

    printf("\nAfter deletion : ");
    for (int i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}