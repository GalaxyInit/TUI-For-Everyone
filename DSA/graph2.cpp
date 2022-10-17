#include <iostream>
using namespace std;
/*
A collection of entities called nodes linked together to stimulate a heirarchy.
tree is a non-linear stucture, its a heirarichal structure the top most node is called root.
Some terms use in tree (root- top most node , children , parent , sibling(have same parent) , leaf(node that do not have any children node))
If we can go from A to B , A is ancestor of B and B is descendent of A
Tree -> recursive data structure , N nodes (N-1 edges).
Depth and height = Depth of x=length of path from root to x OR no. of edges in path from root to x
Height of x=  No. of edges in longest path from x to a leaf.
Height of tree = height of root node
*/
/*
Binary Tree -> A tree in which each node can have at most 2 children.
strict/proper binary tree -> each node can have either 2 or 0 children
complete binary tree -> all levels except possibly the last are completely filled and all nodes are
as left as possible.
perfect binary tree ->is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.
{Max no. of nodes at level i=2^i}
{Max no. of nodes in a binary tree with height h = 2^0+2^1+...+2^h = 2^(h+1)-1} if n is given then h=log2(n+1)-1
{Height of complete binary tree = [log2n]}
Balanced binary tree -> difference between height of left and right subtree for every node is not more than k(mostly 1) {diff=|height of left - height of right|}
Height of an empty tree = -1 and height of tree with 1 node = 0
struct Node{
    int data;
    Node* left;
    Node* right;
};
We can implement binary tree using: a) dynamically created nodes b)array(used for heap)
IN COMPLETE BINARY TREE Array for node at index i, 
left child index = 2i+1
right child index = 2i+2 
*/
/*
Binary Search Tree -> A binary tree in which for each node , value of all the nodes in left subtree is lesser or equal and value of all the nodes in right subtree is greater.
*/
struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
//Refer video 6:12hr freecodecamp for both meathods of below codes.
// void Insert(BstNode** root , int data){
//  if (*root==NULL)
//  {
//     *root= GetNewNode(data);
//  }
 
// }
//Function to insert in BST , returns address of root node
BstNode* Insert(BstNode* root , int data){
    if (root==NULL)
    {
        root = GetNewNode(data);
    }
    else if (data<= root->data)
    {
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
        return root;
}
bool Search(BstNode* root , int data){
    if (root==NULL) return false;
     else if(root->data==data) return true;
     else if(data<=root->data) return Search(root->left,data);
     else return Search(root->right,data);
    }
int FindMin(BstNode* root){
    if (root==NULL)
    {
        cout<<"Error: tree is empty"<<endl;
        return -1;
    }
    //By recursion
    // else if (root->left==NULL)
    // {
    //     return root->data;
    // }
    // return FindMin(root->left);
    while (root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}
int FindMax(BstNode* root){
    if (root==NULL)
    {
        cout<<"Error: tree is empty"<<endl;
        return -1;
    }
    //By recursion
    else if (root->right==NULL)
    {
        return root->data;
    }
    return FindMax(root->right);
    // while (root->right!=NULL)
    // {
    //     root=root->right;
    // }
    // return root->data;
}
//Height of a node: Number of edges in longest path from the node to a leaf node
//height of tree = height of root
//height of tree with 1 node = 0;
//Depth of a node = No. of edges in path from root to that node.
int FindHeight(BstNode* root){
    if (root==NULL)
    {
        return -1;
    }
    return max(FindHeight(root->left),FindHeight(root->right))+1;
}
int main()
{ 
BstNode* root = NULL;
// Insert(&root , 15); 
// Insert(&root,10);
// Insert(&root,20);
root = Insert(root,15);
root = Insert(root,10);
root = Insert(root,20);
root = Insert(root,25);
root = Insert(root,8);
root = Insert(root,12);
int a=FindMin(root);
int b=FindMax(root);
cout<<"Min: "<<a<<" Max: "<<b<<endl;
 int number;
 cout<<"enter number to search"<<endl;
 cin>>number;
 if (Search(root,number)==true)
 {
    cout<<"found"<<endl;
 }
 else cout<<"not found"<<endl;
 
 return 0;
}