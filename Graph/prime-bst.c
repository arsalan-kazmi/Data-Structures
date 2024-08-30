#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

  printf("Enter the number of nodes: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
      printf("Memory allocation failed\n");
      return;
    }

    printf("Enter data: ");
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
          printf("\nDuplicate data is not allowed.\n");
          free(temp);
          break;
        }
      }
    }
  }
}

bool is_prime(int num)
{
  if (num <= 1)
  {
    return false;
  }
  if (num == 2 || num == 3)
  {
    return true;
  }
  if (num % 2 == 0 || num % 3 == 0)
  {
    return false;
  }
  for (int i = 5; i * i <= num; i += 6)
  {
    if (num % i == 0 || num % (i + 2) == 0)
    {
      return false;
    }
  }
  return true;
}

void display_prime_numbers(struct node *root)
{
  if (root != NULL)
  {
    // Traverse the left subtree
    display_prime_numbers(root->left);

    // Check if the current node's data is prime
    if (is_prime(root->data))
    {
      printf("%d ", root->data);
    }

    // Traverse the right subtree
    display_prime_numbers(root->right);
  }
}

int main()
{
  create_bst();

  printf("Prime numbers in the BST: ");
  display_prime_numbers(root);
  printf("\n");

  return 0;
}
