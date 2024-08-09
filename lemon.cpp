#include<iostream>
using namespace std;
#include<string>
// void rishab(int n,int n1)
// {
//     if(n==7)
//     cout<<"rishuu is single";
//     else
//     cout<<"rishuu is planning to minlge";
// }
// int main()
// {
//     rishab(20,200);
//     return 0;
// }

int god1(int n)
{
    int l1=0;
    if(n>=7)
    {
        cout<<"god1 offered 7\n";
         l1 = n-7;
    }
    else if(n<7)
    {
        cout<<"god1 offered"<<n<<" need "<<7-n<<endl;
    }
    
    return  l1;
    

}
int god2(int l1)
{
    int l2=0;
    if(l1>=7)
    {
        cout<<"god2 offered 7\n";
        l2 = l1 -7;
    }
    else if(l1<7)
    {
        cout<<"god2 offered "<<l1<<" need "<<7-l1<<endl;
    }
    return l2;
    

}
int god3(int l2)
{
    int l3=0;
    if(l2>=7)
    {
        cout<<"god3 offered 7\n";
        l3 = l2-7;
    }
    else if(l2<7)
    {
        cout<<"god3 offered "<<l2<<" need "<<7-l2<<endl;
    }
    return l3;
    
}

int main()
{
    int m,l1,l2,l3;
    cout<<"enter number of lemons\n";
    cin>>m;
     int n =m;
     if(n<0)
     {
        n=0;
     }
    l1 = god1(n);
    l2 = god2(l1);
    l3 = god3(l2);
    if(m<0)
    {
        cout<<"invalid input";
    }
    else{
    if(m==21)
    {
        cout<<"sufficient"<<endl;
    }
    else if(m<21)
    {
        cout<<"insufficient"<<21-m;
    }
    else if(m>21)
    {
        cout<<"surplus "<<m-21<<endl;
    }
    }
    
}
    




