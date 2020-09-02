#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}Node;

Node* newNode(int data)
{

    Node* node = (Node*)malloc(sizeof(Node));

 
    node->data = data;

 
    node->left = NULL;
    node->right = NULL;
    return(node);
}


void search(Node* node)
{
    if (node == NULL)
        printf("0\n");
    else
    {
        search(node->right);
        printf("%d", node->data);
    }
}

Node* insert(Node* node, int data)
{
    if (node->data > data)
    {
        node->left = insert(node->left, data);
    }
    else
    {
        node->right = insert(node->right, data);
    }
    return node;
}

int main() {
    int n, x;
    scanf("%d", &n);
    Node* node = newNode(0);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insert(node, x);
        if (x == 0)
        {
            search(node);
        }
    }

    return 0;
}