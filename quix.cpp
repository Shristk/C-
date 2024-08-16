#include<iostream>
using namespace std;
#include<string>
int main()
{
    string name,option,op1;
    char choice;
    int n,score=0,f=0;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"hi "<<name<<" welcome to the quiz"<<endl;
    cout<<"Lets start"<<endl;
    cout<<"1.who is the captain of indian cricket team ?"<<endl;
    cout<<"a.rohit sharma"<<endl;
    cout<<"b.dhoni"<<endl;
    cout<<"c.virat"<<endl;
    cout<<"d.rahul dravid"<<endl;
    cout<<"do you want to skip?"<<endl;
    cin>>option;
    if(option=="no")
    {
        cout<<"enter the answer of your choice"<<endl;
        cin>>choice;
        if(choice=='a')
        {
            cout<<"good,u scored 1"<<endl;
            score=score+1;
        }
        else
        {
        cout<<"wrong answer u lost 1"<<endl;
        score=score-1;
        }
    }
    cout<<"do u want to continue the quiz?"<<endl;
    cin>>op1;
    if(op1=="yes")
    {
    cout<<"2.who is the prime minister of india?"<<endl;
    cout<<"a.irfan khan"<<endl;
    cout<<"b.narendra modi"<<endl;
    cout<<"c.amit shah"<<endl;
    cout<<"d.rahul gandhi"<<endl;
    cout<<"do you want to skip?"<<endl;
    cin>>option;
    if(option=="no")
    {
        cout<<"enter the answer of your choice"<<endl;
        cin>>choice;
        if(choice=='b')
        {
            cout<<"good,u scored 1"<<endl;
            score=score+1;
        }
        else
        {
        cout<<"wrong answer u lost 1"<<endl;
        score=score-1;
        }
    }
    }
    else{
        cout<<"ur total score "<<score<<endl;
        f++;
    }
    if(f==0)
    {
    cout<<"do u want to continue the quiz?"<<endl;
    cin>>op1;
    if(op1=="yes")
    {
    cout<<"3.what is after biryani?"<<endl;
    cout<<"a.tea"<<endl;
    cout<<"b.drink"<<endl;
    cout<<"c.ice cream"<<endl;
    cout<<"d.sweets"<<endl;
    cout<<"do you want to skip?"<<endl;
    cin>>option;
    if(option=="no")
    {
        cout<<"enter the answer of your choice"<<endl;
        cin>>choice;
        if(choice=='c')
        {
            cout<<"good,u scored 1"<<endl;
            score=score+1;
        }
        else
        {
        cout<<"wrong answer u lost 1"<<endl;
        score=score-1;
        }
    }
    }
    else{
        cout<<"ur total score "<<score<<endl;
        f++;
    }
    }
    if(f==0)
    {
    cout<<"do u want to continue the quiz?"<<endl;
    cin>>op1;
    if(op1=="yes")
    {
    cout<<"4.what is the color of apple?"<<endl;
    cout<<"a.blue"<<endl;
    cout<<"b.red"<<endl;
    cout<<"c.yellow"<<endl;
    cout<<"d.black"<<endl;
    cout<<"do you want to skip?"<<endl;
    cin>>option;
    if(option=="no")
    {
        cout<<"enter the answer of your choice"<<endl;
        cin>>choice;
        if(choice=='b')
        {
            cout<<"good,u scored 1"<<endl;
            score=score+1;
        }
        else
        {
        cout<<"wrong answer u lost 1"<<endl;
        score=score-1;
        }
    }
    }
    else{
        cout<<"ur total score "<<score<<endl;
        f++;
    }
    }
     if(f==0)
    {
    cout<<"do u want to continue the quiz?"<<endl;
    cin>>op1;
    if(op1=="yes")
    {
    cout<<"5.who is the owner of microsoft?"<<endl;
    cout<<"a.jef bezoz"<<endl;
    cout<<"b.tom halland"<<endl;
    cout<<"c.bill gates"<<endl;
    cout<<"d.roman reigns"<<endl;
    cout<<"do you want to skip?"<<endl;
    cin>>option;
    if(option=="no")
    {
        cout<<"enter the answer of your choice"<<endl;
        cin>>choice;
        if(choice=='c')
        {
            cout<<"good,u scored 1"<<endl;
            score=score+1;
        }
        else
        {
        cout<<"wrong answer u lost 1"<<endl;
        score=score-1;
        }
    }
    }
    else{
        cout<<"ur total score "<<score<<endl;
        f++;
    }
    }
    if(f==0)
    {
        cout<<"great u completed the quiz"<<endl;
        cout<<"your total score is "<<score<<endl;
    }

}