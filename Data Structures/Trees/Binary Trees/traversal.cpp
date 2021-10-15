#include&lt;iostream&gt;
using namespace std;
//binary tree node declaration 
struct bintree_node{
    bintree_node *left;
    bintree_node *right;
    char data;
} ;
class bintree_class{
    bintree_node *root;
    public:
    bintree_class(){
        root=NULL;
    }
    int isempty() {
        return(root==NULL);
    }
    void insert_node(int item);
    void inorder_seq();
    void inorder(bintree_node *);
    void postorder_seq();
    void postorder(bintree_node *);
    void preorder_seq();
    void preorder(bintree_node *);
};
void bintree_class::insert_node(int item){
    bintree_node *p=new bintree_node;
    bintree_node *parent;
    p-&gt;data=item;
    p-&gt;left=NULL;
    p-&gt;right=NULL;
    parent=NULL;
    if(isempty())
        root=p;
    else{
        bintree_node *ptr;
        ptr=root;
        while(ptr!=NULL)        {
            parent=ptr;
            if(item&gt;ptr-&gt;data)        
                ptr=ptr-&gt;right;
            else
                ptr=ptr-&gt;left;
        }   
        if(item&lt;parent-&gt;data)
            parent-&gt;left=p;
        else
            parent-&gt;right=p;
    }
}
void bintree_class::inorder_seq()
{
    inorder(root);
}
void bintree_class::inorder(bintree_node *ptr)
{
    if(ptr!=NULL){
        inorder(ptr-&gt;left);
        cout&lt;&lt;"  "&lt;&lt;ptr-&gt;data&lt;&lt;"     ";
        inorder(ptr-&gt;right);
    }
}
void bintree_class::postorder_seq()
{
    postorder(root);
}
void bintree_class::postorder(bintree_node *ptr)
{
    if(ptr!=NULL){
        postorder(ptr-&gt;left);
        postorder(ptr-&gt;right);
        cout&lt;&lt;"  "&lt;&lt;ptr-&gt;data&lt;&lt;"     ";
    }
}
void bintree_class::preorder_seq()
{
    preorder(root);
}
void bintree_class::preorder(bintree_node *ptr)
{
    if(ptr!=NULL){
        cout&lt;&lt;"  "&lt;&lt;ptr-&gt;data&lt;&lt;"     ";
        preorder(ptr-&gt;left);
        preorder(ptr-&gt;right);
    }
}
int main()
{
    bintree_class bintree;
    bintree.insert_node('A');
    bintree.insert_node('B');
    bintree.insert_node('C');
    bintree.insert_node('D');
    bintree.insert_node('E');
    bintree.insert_node('F');
    bintree.insert_node('G'); 
    cout&lt;&lt;"Inorder traversal:"&lt;&lt;endl;
    bintree.inorder_seq();
    cout&lt;&lt;endl&lt;&lt;"Postorder traversal:"&lt;&lt;endl;
    bintree.postorder_seq();
    cout&lt;&lt;endl&lt;&lt;"Preorder traversal:"&lt;&lt;endl;
    bintree.preorder_seq();
}