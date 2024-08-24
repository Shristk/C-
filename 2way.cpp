//A PROGRAM IN C+ TO PROVE THE WORKING OF A DOUBLY LINKED LIST BY MAINTAINING THE PREV AND NEXT POINTER OF A NODE

#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node()
    {
        data=0;
        next=NULL;
        prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
    class linkedlist{
        public:
        Node *head;
        linkedlist(){
            head=NULL;
        }
        void insertatend(int data);
        void insert(int data);
        void insertatbeginning(int data);
        void insertatposition(int data,int pos);
        void display();
        void revdisplay();
    };
    void linkedlist::insert(int data)
    {
       Node* newnode = new Node(data);
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
        newnode->prev=temp;
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
    void linkedlist::revdisplay(){
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->prev;
        }
    }
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
        newnode->prev=temp;
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
        temp1->prev=newnode;
        newnode->prev=temp;
    }
    int main(){
        linkedlist obj;
       char ch='y';
    int n1;
    // cout<<"enter the first value in the linked list"<<endl;
    while(ch=='y')
    {
        cout<<"enter the element data"<<endl;
        cin>>n1;
        obj.insert(n1);
        cout<<"press y if u want to continue insertion"<<endl;
        cin>>ch;
    }
        obj.display();
        cout<<endl;
        obj.revdisplay();
    }
