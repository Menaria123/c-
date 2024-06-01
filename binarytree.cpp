#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d)//creating constructor
    {
        data=d;
        left=right=NULL;
    }
};
Node* insert(Node* root,int data)//function for insertion
{
    if(root==NULL)//checking if root is nulll  or not!
    {
        return new Node(data);
    }
    if(data<root->data)//if root have data then...
    {
        root->left=insert(root->left,data);//...insert in left or...
    }
    else
    {
        root->right=insert(root->right,data);//...in right!
    }
    return root;
}
void print(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    print(root->left);
    cout<<root->data<<"";
    print(root->right);
}
int main()
{
    Node *root = new Node(1);
    insert(root, 3);
    insert(root, 2);
    insert(root, 5);
    insert(root, 7);
    insert(root, 4);
    insert(root, 10);
    print(root);
}
