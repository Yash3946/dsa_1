#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int num)
{ // NULL,60

    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = num;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        if (num > root->data)
        {
            // right
            root->right = addNode(root->right, num); // NULL,60
        }
        else
        {
            // left
            root->left = addNode(root->left, num);
        }
        return root;
    }
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d", root->data);
    }
}

int main()
{

    struct node *root = NULL;

    root = addNode(root, 50); // NULL,50
    root = addNode(root, 60); // Root:50,60
    root = addNode(root, 40);
    root = addNode(root, 30);
    root = addNode(root, 45);
    root = addNode(root, 55);
    root = addNode(root, 80);
    
    // printf(" %d",root->data);
    // printf(" %d",root->left->data);
    // printf(" %d",root->right->data);
    // printf(" %d",root->left->left->data);

    printf("\nInOrder ");
    inOrder(root);

    printf("\nPreOrder ");
    preOrder(root);

    printf("\nPostOrder ");
    postOrder(root);

    return 0;
}