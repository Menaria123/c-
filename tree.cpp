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
Node* Tree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    Node* n=new Node(d);
    n->left=Tree();
    n->right=Tree();
    return n;
}
void print(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"";
    print(root->left);
    print(root->right);
}
int main()
{
    Node* root=Tree();
    print(root);
}