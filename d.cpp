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
void print(Node* root,int data)
{
    if(root==NULL)//checking if root is nulll  or not!
    {
        return;
    }
    print(root->right,data);
    cout<<data<<" ";
    print(root->left,data);
}
int main()
{
    Node* root=NULL;
    int arr[]={1,2,3,4,5,6,7};
    int x;
    for(int x:arr)
    {
        root=insert(root,x);
    }
    
    print(root,x);
}