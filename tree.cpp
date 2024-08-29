//DIRECT INSERTION
#include<iostream>
using namespace std;
class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;
    treenode(int x){
        this->data=x;
        this->left=nullptr;
        this->right=nullptr;
    }
};
void inorder(treenode *root){
    if(root==nullptr)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    treenode* root= new treenode(10);
    root->left=new treenode(20);
    root->right = new treenode(30);
    root->left->left=new treenode(40);
    root->left->right=new treenode(50);
    inorder(root);
}
