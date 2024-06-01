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
void Inorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node* root=Tree();
    preorder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}