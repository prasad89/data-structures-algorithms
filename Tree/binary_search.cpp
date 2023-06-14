#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

struct Node *newnode(int val)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

struct Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return newnode(val);
    }
    else if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}

struct Node *search(Node *root, int val)
{
    if (root == NULL || root->data == val)
    {
        return "root";
    }
    else if (val < root->data)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
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

    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root;
    root = newnode(20);

    insert(root, 5);
    insert(root, 1);
    insert(root, 15);
    insert(root, 9);
    insert(root, 7);
    insert(root, 12);
    insert(root, 30);
    insert(root, 25);
    insert(root, 40);
    insert(root, 45);
    insert(root, 42);

    cout << endl
         << "Inorder traversal of tree is: ";
    inorder(root);

    cout << endl
         << "Postorder traversal of tree is: ";
    postorder(root);

    cout << endl
         << "Preorder traversal of tree is: ";
    preorder(root);

    return 0;
}