#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* right;
    node* left;
    node(int d)
    {
        data=d;
        left= right=NULL;
    }
};
node *insert(node * root,int data)
{
    if(root==NULL)
    {
        return new node(data);
    }
    if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}
node* deleteNode(node* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        }

        node* temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }

        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void printinorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}
int main()
{
    node *root=NULL;
    int ar[]={8,3,10,1,6,14,4,7,13};
    for(int x:ar)
    {
        root=insert(root,x);
    }
    printinorder(root);
    deleteNode(root,4);
}