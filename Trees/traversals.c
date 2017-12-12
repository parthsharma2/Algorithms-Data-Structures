#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *root = NULL;

struct Node * newNode(int n){
  struct Node *temp= (struct Node *) malloc(sizeof(struct Node));
  temp->data = n;
  temp->left = NULL;
  temp->right = NULL;

  return (temp);
}

void printTree(){
  printf("    1\n");
  printf("   / \\ \n");
  printf("  2   3\n");
  printf(" / \\ \n");
  printf("4   5 \n");
  printf("\n");
}

void preorder(struct Node *ptr){
  if(ptr == NULL)
    return;
  printf("%d ", ptr->data);
  preorder(ptr->left);
  preorder(ptr->right);
}

void inorder(struct Node *ptr){
  if(ptr == NULL)
    return;
  inorder(ptr->left);
  printf("%d ", ptr->data);
  inorder(ptr->right);
}

void postorder(struct Node *ptr){
  if(ptr == NULL)
    return;
  postorder(ptr->left);
  postorder(ptr->right);
  printf("%d ", ptr->data);
}

int main(){
  root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  printTree();
  printf("Predorder: ");
  preorder(root);
  printf("\nInorder: ");
  inorder(root);
  printf("\nPostorder: ");
  postorder(root);
  printf("\n");
  return 0;
}
