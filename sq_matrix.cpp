#include<iostream>
using namespace std;
int main()
{
    int r,c,n,i,j;
    // cout<<"enter number of elements "<<endl;
    // cin>>n;
    cout<<"enter number of rows and columns "<<endl;
    cin>>r>>c;
    int arr[r][c],arrt[r][c];
    cout<<"enter the elements in the matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"original"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            arrt[i][j]=arr[j][i];
        }
    }
    cout<<"transpose "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arrt[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"rotated 90 "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=c-1;j>=0;j--)
        {
            cout<<arrt[i][j]<<" ";
        }
        cout<<endl;
    }
}