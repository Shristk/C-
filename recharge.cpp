//PROGRAM IN C++ OT TAKE CARE OF UR RECHARGE PLAN AND INFORM U ABOUT UR PENDING VALIDITY
#include<iostream>
#include<string>
using namespace std;
class recharge
{
    public:
    int days(int n)
    {
        if (n<84)
        {
            cout<<84-n<<" days left to expire"<<endl;
        }
        else
        {
            cout<<"your plan expired. kindly recharge"<<endl;
        }
    }
    int messages(int m)
    {
        if (m<100)
        {
            cout<<"yet to message "<<100-m<<endl;
        }
        else
        {
            cout<<"message failed"<<endl;
        }
    }
    int data(float d)
    {
        if(d<2)
        {
            cout<<"yet to data use "<<2-d<<endl;
        }
        else
        {
            cout<<"speed reduced because exceed ur limit"<<endl;
        }
    }
    int call(int c)
    {
        if (c<3000)
        {
            cout<<"yet to call "<<3000-c<<endl;
        }
        else
        {
            cout<<"calls could not be connected .kindly top up"<<endl;
        }
    }
};
int main()
{
    int n,m,c;
    float d;
    cout<<"enter ur plan validity days left:";
    cin>>n;
    // cin>>m;
    // cin>>d;
    // cin>>c;
    recharge obj;
    if(n>84)
    {
    obj.days(n);
    }
    if(n<84)
    {
    cout<<"\nenter the number of messages u sent today : ";
    cin>>m;
        cout<<"\nenter the amount of data u used today : ";
    cin>>d;
        cout<<"\nenter the amount of calls u dialed today : ";
    cin>>c;
    obj.days(n);
    obj.messages(m);
    obj.data(d);
    obj.call(c);
    }

}
