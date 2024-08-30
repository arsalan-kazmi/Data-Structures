#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *root = NULL;

void create_bst()
{
  int n;
  struct node *temp, *trav;

  printf("Enter the number of nodes : ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &temp->data);

    temp->left = temp->right = NULL;

    if (root == NULL)
    {
      root = temp;
    }
    else
    {
      trav = root;

      while (1)
      {
        if (temp->data < trav->data)
        {
          if (trav->left == NULL)
          {
            trav->left = temp;
            break;
          }
          else
          {
            trav = trav->left;
          }
        }
        else if (temp->data > trav->data)
        {
          if (trav->right == NULL)
          {
            trav->right = temp;
            break;
          }
          else
          {
            trav = trav->right;
          }
        }
        else
        {
          printf("\nInvalid data");
        }
      }
    }
  }
}

void search()
{
  int item, flag = 0;
  printf("Enter the item to search : ");
  scanf("%d", &item);

  struct node *trav = root;

  while (trav != NULL)
  {
    if (trav->data == item)
    {
      printf("Item found");
      flag = 1;
      break;
    }
    else if (item < trav->data)
    {
      trav = trav->left;
    }
    else if (item > trav->data)
    {
      trav = trav->right;
    }
  }
  if (flag == 0)
  {
    printf("Item not found");
  }
}

int main()
{
  create_bst();
  search();

  return 0;
}