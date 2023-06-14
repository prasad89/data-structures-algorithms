#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

struct Node *create()
{
    Node *newnode = (Node *)malloc(sizeof(Node));

    int val;
    cout << "Enter node data: ";
    cin >> val;

    if (val == -1)
        return 0;

    newnode->data = val;

    cout << "Enter left child of " << val << endl;
    newnode->left = create();

    cout << "Enter right child of " << val << endl;
    newnode->right = create();

    return newnode;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    root = create();

    cout << endl
         << "Inorder traversal of tree is: ";
    inorder(root);

    cout << endl
         << "Preorder traversal of tree is: ";
    preorder(root);

    cout << endl
         << "Postorder traversal of tree is: ";
    postorder(root);

    return 0;
}