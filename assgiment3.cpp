#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};
int depth(Node* root,int x)
{
    if(root==NULL)
    {
        return -1;
    }
    int dist = -1;
    if ((root->data == x)|| (dist = depth(root->left, x)) >= 0|| (dist = depth(root->right, x)) >= 0)
        return dist + 1;
  
    return dist;
}
int main()
{
    //Node* root=Tree();
    Node* root=new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->left = new Node(7);
    int k=7;
    cout<<"depth:"<<depth(root,k);
    return 0;
}