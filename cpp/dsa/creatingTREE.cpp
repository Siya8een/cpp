// creating a tree

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{

    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
};
void preorder(struct node *p)
{
    if (p != NULL)
    {
        printf("%d", p->data);
        preorder(p->left);
        preorder(p->right);
    }
};
void postorder(struct node *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d", p->data);
    }
};
void inorder(struct node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d", p->data);
        inorder(p->right);
    }
};

int main()
{
    struct node *p = createnode(1);
    struct node *p1 = createnode(13);
    struct node *p2 = createnode(4);
    struct node *p3 = createnode(0);
    struct node *p4 = createnode(11);
    struct node *p5 = createnode(3);
    struct node *p6 = createnode(6);
    struct node *p7 = createnode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p6;
    p3->left = p7;

    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);

    return 0;
}
