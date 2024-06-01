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
int totalNodes(Node* root)
{
    if (root == NULL)
        return 0;
 
    int l = totalNodes(root->left);
    int r = totalNodes(root->right);
 
    return 1 + l + r;
}
int getLeafCount(Node* root)
{
    if(root == NULL)    
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;        
    else
        return getLeafCount(root->left)+
            getLeafCount(root->right);
}
 int countnodes(Node *root)
        {
            int count=0;
            if(root != NULL)
            {
                countnodes(root->left);
                count++;
                countnodes(root->right);
            }
            return count;
        }
int main()
{
    Node* root=new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<"Total no nodes:"<<totalNodes(root);
    cout<<"\nLeaf count:"<<getLeafCount(root);
    cout<<"\nCount nodes:"<<countnodes(root);
    return 0;
}