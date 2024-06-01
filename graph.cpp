#include <iostream>
using namespace std;
class Node {
    public:
    int vertex;
    Node* next;
    Node()
    {
        vertex = -1;
        next = NULL;
    }
};
Node *gnode;
void createGraph(Node *adj[],int no_of_nodes);
void displayGraph(Node *adj[],int no_of_nodes);
int main()
{
    Node *Adj[10];
    int i, no_of_nodes;
    cout<<"enter the number of nodes in graph";
    cin>>no_of_nodes;
    for(i=0;i<no_of_nodes;i++)
    Adj[i]=NULL;
    createGraph(Adj,no_of_nodes);
    displayGraph(Adj,no_of_nodes);
}
void createGraph(Node *adj[],int no_of_nodes){
    Node *newNode,*last;
    int i,j,n,val;
    for(i=0;i<no_of_nodes;i++)
    {
        last = NULL;
        cout<<"\n Enter the number of neighbours of "<<i<<endl;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cout<<"\n enter the value for "<<j<<" of "<< i<<endl;
            cin>>val;
            newNode = new Node();
            newNode->vertex = val;
            newNode->next = NULL;
            if(adj[i] == NULL)
            adj[i] = newNode;
            else
            last->next = newNode;
            last = newNode;
        }
    }
}
void displayGraph(Node *adj[],int no_of_nodes)
{
    Node *ptr;
    int i;
    for(i = 0;i<no_of_nodes;i++)
    {
        ptr = adj[i];
        cout<<"\n Neighbours of "<<i<<" are"<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr->vertex;
            ptr = ptr->next;
        }
    }
}
