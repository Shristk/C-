#include<iostream>
using namespace std;
#include<string>
class frooti
{
    public:
    int i,count=1;
    void machine(int ic)
    {
        frooti obj;
        if(ic>0)
        {
         int n,t=ic;
    cout<<"enter the number of frootis you want\n";
    cin>>n;
        if(n>0)
        {
        if(n>ic)
        {
            while(ic>0)
            {
                cout<<"take frooti "<<count<<endl;
                count = count+1;
                ic--;
            }
            cout<<"shortage of "<<n-t<<endl;
            ic=0;
            cout<<"final capacity = "<<ic<<endl;
            obj.machine(ic);
        }
        else if(n<ic)
        {
            for( i=0;i<n;i++)
            {
                cout<<"take frooti "<<count++<<endl;
            }
            ic = ic-n;
            cout<<"final capactiy = "<<ic<<endl;
            obj.machine(ic);
        }
        else if(n==ic)
        {
            for(i=0;i<n;i++)
            {
                cout<<"take frooti "<<count++<<endl;
            }
            ic=0;
            cout<<"final capactiy = "<<ic<<endl;
            obj.machine(ic);
        }
        }
        else if(n==0)
        {
            cout<<"thanks for coming"<<endl;
            cout<<"initial capactiy "<<ic<<endl;
        }
        else if(n<0)
        {
            cout<<"invalid inuput"<<endl;
            obj.machine(ic);
        }
        }
        else{
            cout<<"out of stock"<<endl;
            cout<<"enjoy your drinks"<<endl;
        }
    }
};
int main()
{
    frooti obj;
    int ic;
    cout<<"enter the capacity of the machine \n";
    cin>>ic;
    obj.machine(ic);
    return 0;
}