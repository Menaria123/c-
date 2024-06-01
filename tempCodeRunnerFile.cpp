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
    Node *n=new Node(d);
    n->left=Tree();
    n->right=Tree();
    return n;
}
int depth(Node* root,int x)
{
    int dist=-1;
    if(root==NULL)
    {
        return -1;
    }
    if((root->data==x)||(dist=depth(root->left,x))>=0||(dist=depth(root->right,x))>=0)
    return dist +1;
    return dist;
}
void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root=Tree();
    int k=25;
    cout<<"Depth:"<<depth(root,k);
    return 0;
}