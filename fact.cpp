//PROGRAM IN C++ TO PRINT THE FACTORIAL OF ALL THE ELEMENTS IN A GIVEN ARRAY
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else{
        return n*(factorial(n-1));
    }
}
int main()
{
    int n,i,n1,res,count=0;
    cout<<"enter size of the array"<<endl;
    cin>>n;
    if(n>=3&&n<=8)
    {
        int arr[n],arr1[n];
        cout<<"enter the elements in the array which are between 1 to 10"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>n1;
            if(n1>10 || n1<1)
            {
                cout<<"invalid input"<<endl;
                count++;
                break;
            }
            arr[i]=n1;
        }
        if(count==0)
        {
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(i=0;i<n;i++)
        {
            res = factorial(arr[i]);
            arr1[i]=res;
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr1[i]<<" ";
        }
        }
    }
    else{
        cout<<"enter valid size of the array"<<endl;
    }
}
