/*A C++ PROGRAM TO TAKE A STRING INPUT AND ROTATE */
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s1,s2;
    char c,c1,f;
    int i;
    cout<<"enter the string"<<endl;
    cin>>s1;
    s2 =s1;
    int n =s1.length();
    c =s1[0];
    for(i=0;i<n;i++)
    {
        s1[i]=s1[i+1];
    }
    s1[n-1] = c;
    cout<<"left rotation\n";
    // for(i=0;i<n;i++)
    // {
    //     cout<<s1[i];
    // }
    cout<<s1<<endl;
    s1 = s2;
    c1 = s1[n-1];
    for(i=n-1;i>=0;i--)
    {
        s1[i+1]=s1[i];
    }
    s1[0] = c1;
    cout<<"right rotation\n";
    cout<<s1;


}