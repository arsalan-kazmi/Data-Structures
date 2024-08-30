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

void display_even(struct node *root)
{
  if (root != NULL)
  {
    display_even(root->left);

    if (root->data % 2 == 0)
    {
      printf("%d ", root->data);
    }

    display_even(root->right);
  }
}

int main()
{
  create_bst();

  printf("Even numbers in the BST: ");
  display_even(root);
  printf("\n");

  return 0;
}