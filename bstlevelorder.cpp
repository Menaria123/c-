#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
Node* Tree()
{
    int d,c1,c2;
    cin>>d;
    Node *root=new Node(d);
    queue<Node*>Q;
    Q.push(root);
    while(Q.empty())
    {
        Node *current=Q.front();
        cout<<current->data<<endl;
        cin>>c1;
        cin>>c2;
        if(c1==-1)
        {
            current->left=NULL;
        }
        else{
            current->left=new Node(c1);
            Q.push(current->left);
        }
        if(c2==-1)
        {
            current->right=NULL;
        }
        else{
            current->right=new Node(c2);
            Q.push(current->right);
        }
        Q.pop();
    }
    return root;
}
void print(Node *root)
{
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node *current=Q.front();
        cout<<current->data<<endl;
        if(current->left!=NULL)
        {
            Q.push(current->left);
        }
        if(current->right!=NULL)
        {
            Q.push(current->right);
        }
        Q.pop();
    }
}
int main()
{
    Node *root=Tree();
    print(root);
    return 0;
}




