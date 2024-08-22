//INSERTION
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
    class linkedlist{
        public:
        Node *head;
        linkedlist(){
            head=NULL;
        }
        void insertatend(int data);
        void insertatbeginning(int data);
        void insertatposition(int data,int pos);
        void display();
    };
    void linkedlist:: insertatend(int data){
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void linkedlist:: display(){
        Node* temp = head;
        if(head==NULL){
            cout<<"list empty"<<endl;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void linkedlist:: insertatbeginning(int data){
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        } 
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void linkedlist:: insertatposition(int data,int pos){
        Node* newnode=new Node(data);
        Node* temp =head;
        Node* temp1;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=newnode;
        newnode->next=temp1;
    }
int main()
{
    linkedlist obj;
    int pos;
    int n,n1;
    cout<<"number of nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>n1;
        obj.insertatend(n1);
    }
    obj.insertatbeginning(400); 
    obj.insertatposition(40,2);
    obj.display();
}