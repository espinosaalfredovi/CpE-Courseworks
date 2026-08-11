/*
ACTIVITY 7.1

Find an image on the internet of a binary tree with 7 to 12 nodes.
Make a C++ program for the tree using In-order Traversal.

Save as Activity7.1.cpp

BINARY TREE:

              8
            /   \
           4     12
          / \    / \
         2   6  10  14
            / \
           5   7

SAMPLE OUTPUT:

In-order Traversal:
2 4 5 6 7 8 10 12 14
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int value)
{
    Node* newNode = new Node;

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void inorder(Node* root)
{
    if (root != NULL)
    {
        inorder(root->left);

        cout << root->data << " ";

        inorder(root->right);
    }
}

int main()
{
    Node* root = createNode(8);

    root->left = createNode(4);
    root->right = createNode(12);

    root->left->left = createNode(2);
    root->left->right = createNode(6);

    root->right->left = createNode(10);
    root->right->right = createNode(14);

    root->left->right->left = createNode(5);
    root->left->right->right = createNode(7);

    cout << "In-order Traversal:" << endl;

    inorder(root);

    cout << endl;

    return 0;
}