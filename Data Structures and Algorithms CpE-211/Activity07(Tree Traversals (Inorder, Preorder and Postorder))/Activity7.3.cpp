/*
ACTIVITY 7.3

Find an image on the internet of a binary tree with 7 to 12 nodes.
Make a C++ program for the tree using Post-order Traversal.

Save as Activity7.3.cpp

BINARY TREE:

              8
            /   \
           4     12
          / \    / \
         2   6  10  14
            / \
           5   7

SAMPLE OUTPUT:

Post-order Traversal:
2 5 7 6 4 10 14 12 8
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

void postorder(Node* root)
{
    if (root != NULL)
    {
        postorder(root->left);

        postorder(root->right);

        cout << root->data << " ";
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

    cout << "Post-order Traversal:" << endl;

    postorder(root);

    cout << endl;

    return 0;
}