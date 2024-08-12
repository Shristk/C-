/*WRITE A PROGRAM TO ENTER A NUMBER AND THEN TAKE INPUT FROM SOMEONE ELSE TO GUESSS THE NUMBER*/
#include<iostream>
using namespace std;
int main()
{
    int n,n1,i = 1;
    cout<<"enter the number\n";
    cin>>n;
    while (i!=n)
    {
        cout<<"enter ur guess"<<endl;
        cin>>n1;
        if(n1!=n && n1>n)
        {
            cout<<"low"<<endl;
            break;
        }
        else if(n1!=n && n1<n)
        {
            cout<<"high"<<endl;
            break;
        }
        else if(n1 ==n)
        {
            cout<<"you guessed it right"<<endl;
            break;
        }
    }
    return 0;


}