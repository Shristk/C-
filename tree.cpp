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
//==============================================================================================================================
//NODE INSERTION IN BINARY TREE
#include<iostream>
using namespace std;
#include<queue>
class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;
    treenode(int value){
        data = value;
        left=NULL;
        right=NULL;
    }
};
void inorder(treenode* root){
    if(root!=NULL)
    {
        inorder(root->left);
    }
}
int main()
{
    treenode* root;
    int x,y,z;
    cout<<"enter the root data: ";
    cin>>x;
    root= new treenode(x);
    queue<treenode*>q;
    q.push(root);
    while(!q.empty())
    {
        treenode* temp=q.front();
        q.pop();
        cout<<"enter the left data: ";
        cin>>y;
        if(y!=-1)
        {
            temp->left=new treenode(y);
            q.push(temp->left);
        }
        cout<<"enter the right data: ";
        if(z!=-1)
        {
            temp->right=new treenode(z);
            q.push(temp->right);
        }        
    }
}
