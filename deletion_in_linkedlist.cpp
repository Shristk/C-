//DELETION
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
        void deleteatend();
        void insertatbeginning(int data);
        void deleteatbeginning();
        void insertatposition(int data,int pos);
        void deleteatposition(int pos);
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
    void linkedlist:: deleteatbeginning()
    {
        head  = head->next;
    }
    void linkedlist:: deleteatend()
    {
        Node* temp = head;
        Node* prev = temp;
        while(temp->next!=NULL)
        {
            prev =temp;
            temp = temp->next;
        }
        prev->next=NULL;
    }
    void linkedlist:: deleteatposition(int pos)
    {
        Node* temp = head;
        Node* prev = temp;
        for(int i=0;i<pos;i++)
        {
            prev = temp;
            temp=temp->next;
        }
        prev->next = temp->next;
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
    // obj.deleteatbeginning();
    obj.deleteatposition(3);
    // obj.deleteatend();
    obj.display();
}
