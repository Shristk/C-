//Program in C++ ot implement the logic of bubble sort
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int c;
    // int n = sizeof(arr);
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<n;i++)
    {
            if(arr[i+1]<arr[i])
            {
                c = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
    }
    }
}
int main()
{
    int n,i;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}
