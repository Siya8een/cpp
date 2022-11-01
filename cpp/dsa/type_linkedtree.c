// creating a tree
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
};

// preorder

void preOrder(struct node *p)
{
    if (p != NULL)
    {
        printf("%d", p->data);
        preOrder(p->left);
        preOrder(p->right);
        return;
    }
};

// postorder

void postOrder(struct node *p)
{
    if (p != NULL)
    {
        postOrder(p->left);
        postOrder(p->right);
        printf("%d", p->data);

        return;
    }
};

// inorder

void inOrder(struct node *p)
{
    if (p != NULL)
    {
        inOrder(p->left);
        printf("%d", p->data);
        inOrder(p->right);

        return;
    }
};

int main()
{
    struct node *p = createnode(5);
    struct node *p1 = createnode(51);
    struct node *p2 = createnode(25);
    struct node *p3 = createnode(8);
    struct node *p4 = createnode(9);
    struct node *p5 = createnode(3);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;

    preOrder(p);
    postOrder(p);
    inOrder(p);
}