#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};
int leafnode(Node* data)
{
    if(data==NULL)
    {
        return 0;
    }
    if(data->left==NULL && data->right==NULL)
    {
        return 1;
    }
    else{
        return leafnode(data->left)+leafnode(data->right);
    }
}
Node *newNode(int d)
{
    Node* root = new Node;
    root->data = d;
    root->left = root->right = NULL;
    return root;
}
int main()
{
    Node *root = newNode(2);
    root->left     = newNode(7);
    root->right     = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left = newNode(1);
    root->left->right->right = newNode(11);
    root->right->right = newNode(9);
    root->right->right->left = newNode(4);
      
    cout << leafnode(root);
      
    return 0;
}