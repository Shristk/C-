/*WRITE A C++ PROGRAM TO PRINT ALL THE EVEN AND ODD NUMBERS IN A SET OF ARRAY AND IF THE SUM OF THE EVEN
TERMS LIES BETWEEN 30 TO 50 THEN WE PRINT THE SUM OF THE EVEN TERMS ELSE WE RETURN 0.*/

#include<iostream>
using namespace std;
int main()
{
     int n,i,j,s1=0,s2=0,n1=0,n2=0;
     cout<<"enter ther size of array\n";
     cin>>n;
     int arr[n],odd[n1],even[n2];
     for (i = 0;i<n;i++)
     {
        cout<<"enter the elements"<<endl;
        cin>>arr[i];
     }
     cout<<"even terms \n";
     for(i=0;i<n;i++)
     {
        if(arr[i]%2==0)
        {
            s1 = s1+arr[i];
            even[n1]=arr[i];
            n1 = n1+1;
        }
     }
     cout<<"odd terms \n";
     for(i=0;i<n;i++)
     {
        if(arr[i]%2!=0)
        {
            odd[n2]=arr[i];
            n2 = n2+1;
        }
     }
       if(s1>30&&s1<50)
     {
        cout<<"sum of even terms ="<<s1<<endl;
     }
     else 
     {
        cout<<"sum ="<<0;
     }
   cout<<"the even and odd series is "<<endl;

   for(i=0,j=0;i<n1-1,j<n2;i++,j++)
   {
      cout<<even[i]<<"    "<<odd[j]<<endl;
   }
     return 0;

}