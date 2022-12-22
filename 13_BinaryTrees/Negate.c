#include <stdio.h>
#include <stdlib.h>

typedef struct BTree
{
    int value;
    struct BTree *left, *right;
} BTree;

BTree *insert(BTree *root, int value)
{
    if (root == NULL)
    {
        BTree *new_node = (BTree *)malloc(sizeof(BTree));
        new_node->value = value;
        new_node->left = new_node->right = NULL;
        return new_node;
    }
    if (value < root->value)
    { /* insert left */
        root->left = insert(root->left, value);
    }
    else if (value > root->value)
    { /* insert right */
        root->right = insert(root->right, value);
    }
    else
    {
        /* already in the tree */
    }
    return root;
}

void print(BTree *root)
{
    if (root == NULL)
    {
        return;
    }
    print(root->left);
    printf("%d ", root->value);
    print(root->right);
}

void destroy(BTree *root)
{
    if (root == NULL)
    {
        return;
    }
    destroy(root->left);
    destroy(root->right);
    free(root);
}

int countNodes(BTree *root)
{
    int count = 0;
    if (root == NULL)
        return 0;
    count += countNodes(root->left) + countNodes(root->right) + 1;
    return count;
}

int sumNodes(BTree *root)
{
    int sum = 0;
    if (root == NULL)
        return 0;
    sum += sumNodes(root->left) + sumNodes(root->right) + root->value;
    return sum;
}

BTree *searchNodes(BTree *root, int value)
{
    BTree *ans;
    if (root == NULL)
        return NULL;
    if (root->value == value)
        return root;
    if (value > root->value)
        return searchNodes(root->right, value);
    else if (value < root->value)
        return searchNodes(root->left, value);
    else
        return NULL;
}

void negateNodes(BTree *root)
{
    if (root == NULL)
        return;
    root->value *= -1;
    negateNodes(root->left);
    negateNodes(root->right);
}

int main(void)
{
    int sample[] = {15, 96, 34, 12, 14, 56, 21, 11, 10, 9, 78, 43, 0};
    BTree *root = NULL;
    int i;
    for (i = 0; sample[i] > 0; i++)
        root = insert(root, sample[i]);

    /* Call your functions here! */
    print(root);
    printf("\n%d\n", countNodes(root));
    printf("%d\n", sumNodes(root));
    BTree *root34 = searchNodes(root, 78);
    printf("%d\n", root34->value);
    negateNodes(root);
    print(root);
    destroy(root);
    root = NULL;
    return 0;
}