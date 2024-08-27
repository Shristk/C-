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
        void check();
        void setcycle(int n2);
        void reverse();
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
    void linkedlist::check()
    {
        Node* fast = head;
        Node* slow = head;
        while(slow!=NULL&& fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                cout<<"true"<<endl;
                return;
            }
        }
        cout<<"False"<<endl;
        return;
        
    }
    void linkedlist::setcycle(int n2){
        Node* curr= head;
        Node* end=head;
        while(end->next!=NULL)
        {
            end=end->next;
        }
        for(int i=0;i<n2-1;i++)
        {
            curr=curr->next;
        }
        end->next=curr;
    }
int main()
{
    linkedlist obj;
    int pos;
    char ch='y';
    int n1,n2;
    // cout<<"enter the first value in the linked list"<<endl;
    while(ch=='y')
    {
        cout<<"enter the element data"<<endl;
        cin>>n1;
        obj.insertatend(n1);
        cout<<"press y if u want to continue insertion"<<endl;
        cin>>ch;
    }
    cout<<"enter the position u want to create a cycle at "<<endl;
    cin>>n2;
    while(n2<=0)
    {
        cout<<"enter a valid position"<<endl;
        cin>>n2;
    }
    obj.setcycle(n2);
    obj.check();
}