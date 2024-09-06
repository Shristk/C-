//Program in C++ to create a selection sort program
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int c;
    for(int i=0;i<n;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[min],arr[i]);
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
    selectionsort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}
