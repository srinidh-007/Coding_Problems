#include<bits/stdc++.h>
using namespace std;
// STRUCTURE OF BINARY TREE NODE
struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};

// CREATE A NODE
struct Node * createNode(int data)
{
    struct Node * n = new struct Node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
//  PREORDER TRAVERSAL
void preOrderTraversal(struct Node * root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
// POSTORDER TRAVERSAL
void postOrderTraversal(struct Node * root)
{
    if(root!=NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
}
// INORDER TRAVERSAL
void inOrderTraversal(struct Node * root)
{
    if(root!=NULL)
    {
        inOrderTraversal(root->left);
        cout<<root->data<<" ";
        inOrderTraversal(root->right);
    }
}
int main(){
    struct Node * p = createNode(4);
    struct Node * p1 = createNode(1);
    struct Node * p2 = createNode(6);
    struct Node * p3 = createNode(5);
    struct Node * p4 = createNode(2);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    cout<<"preOreder Traversal\n";
    preOrderTraversal(p);
    cout<<endl;
    cout<<"postOreder Traversal\n";
    postOrderTraversal(p);
    cout<<endl;
    cout<<"inOreder Traversal\n";
    inOrderTraversal(p);
return 0;
}
