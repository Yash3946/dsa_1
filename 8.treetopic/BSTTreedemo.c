#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

addNode(struct node *root, int data) // 50,60
{
    struct node *tmp;
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->left = NULL;
        tmp->right = NULL;
        if (data > root->data)
        {
            root->right = tmp;
        }
        else
        {
            root->left = tmp;
        }
    }

    return tmp;
}

int main()
{

    struct node *root = NULL;

    root = addNode(root, 50);
    addNode(root, 60);

    return 0;
}