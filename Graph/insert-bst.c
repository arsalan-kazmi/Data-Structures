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

int insert(int item)
{
  struct node *trav = root, *temp = malloc(sizeof(struct node));
  temp->data = item;
  temp->left = temp->right = NULL;

  while (1)
  {
    if (item < trav->data)
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
    else if (item > trav->data)
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
      break;
    }
  }
}

void in_order(struct node *root)
{
  if (root != NULL)
  {
    in_order(root->left);
    printf("%d ", root->data);
    in_order(root->right);
  }
}

int main()
{
  create_bst();
  insert(6);

  printf("Here is in-order traversal to check insertion at right place : \n");
  in_order(root);

  return 0;
}