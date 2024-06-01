#include<iostream>
using namespace std;
  
// Structure of a Binary Tree Node
class Node {
    public:
    int data;
    Node *left, *right;
  
// Utility function to create
// a new Binary Tree Node

};
Node *newNode(int d)
{
    Node* root = new Node;
    root->data = d;
    root->left = root->right = NULL;
    return root;
}
// Function to find the depth of
// a given node in a Binary Tree
int findDepth(Node* root, int x)
{
    // Base case
    if (root == NULL){
        return -1;
    }
  
    // Initialize distance as -1
    int dist = -1;
    // Check if x is current no
 
    if ((root->data == x)
  
        // Otherwise, check if x is
        // present in the left subtree
        || (dist = findDepth(root->left, x)) >= 0
  
        // Otherwise, check if x is
        // present in the right subtree
        || (dist = findDepth(root->right, x)) >= 0)
  
        // Return depth of the node
        return dist + 1;
  
    return dist;
}
int main()
{
    // Binary Tree Formation
      Node* root = newNode(5);
    root->left = newNode(10);
    root->right = newNode(15);
    root->left->left = newNode(20);
    root->left->right = newNode(25);
    root->left->right->right = newNode(45);
    root->right->left = newNode(30);
    root->right->right = newNode(35);
  
    int k = 25;
  
    // Function call to find the
    // depth of a given node
    cout << "Depth: "<<findDepth(root, k);
 return 0;
}