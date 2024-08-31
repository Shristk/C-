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


===============================================================================================================================================================
//DELETION IN TREE WITH ALL ITS TYPES 
#include <iostream>
#include<bits\stdc++.h>
using namespace std;

class Treenode{
    public:
    int data;
    Treenode *left;
    Treenode *right;
    Treenode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(Treenode *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    else{
        return;
    }
}
void bst(Treenode*root,Treenode *temp){
        if(root->data>temp->data){
            if(root->left!=NULL){
                bst(root->left,temp);
            }
            else{
                root->left=temp;
            }
        }
        else{
            if(root->right!=NULL){
                bst(root->right,temp);
            }
            else{
                root->right=temp;
            }
        }
}
void bst_delete(Treenode *root,int num){
    Treenode *curr,*prev;
    curr=root;
    while(curr!=NULL){
        if(curr->data==num){
            break;
        }
        else{
            prev=curr;
            if(curr->data>num){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
    }
        //case-1 both child NULL
        if(curr->left==NULL && curr->right==NULL){
            if(prev->left==curr){
                prev->left=NULL;
            }
            else{
                prev->right=NULL;
            }
        }
        // case-2 node having one child
        if(curr->left==NULL && curr->right!=NULL){
            if(prev->left==curr){
                prev->left=curr->right;
            }
            else{
                prev->right=curr->right;
            }
        }
        if(curr->left!=NULL && curr->right==NULL){
            if(prev->left==curr){
                prev->left=curr->left;
            }
            else{
                prev->right=curr->left;
            }
        }
        //case-3 node having both child
        Treenode *x;
        if(curr->left!=NULL && curr->right!=NULL){
            x=curr->right;
            if(x->left==NULL){
                curr->data=x->data;
                curr->right=NULL;
                delete x;
            }
            else if(x->left!=NULL){
                Treenode *p1,*y;
                p1=x;
                y=x->left;
                while(y->left!=NULL){
                    p1=y;
                    y=y->left;
                }
                curr->data=y->data;
                p1->left=NULL;
                delete y;
            }
        }

    }
int main(){
    Treenode *root=NULL;
    int x;
    int ch;
    while(1){
        cout<<"enter the data:";
        cin>>x; 
        if(root==NULL){
            root=new Treenode(x);
        }
        else{
        Treenode *temp=new Treenode(x);
        bst(root,temp);
        }
        cout<<"enter do u want to continue:";
        cin>>ch;
        if(ch==1){
            break;
        }
    }
    inorder(root);
    cout<<endl;
    bst_delete(root,100);
    inorder(root);
    

}
