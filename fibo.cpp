//PROGRAM IN C++ TO PRINT THE FIBONAACI SERIES TILL THE GIVEN NUMBER USING RECURSION 

#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<1)
    {
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int n;
    cout<<"enter the range of the fibonacci series"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}
