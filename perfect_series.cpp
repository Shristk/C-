//WRITE A PROGRAM IN C++ TO PRINT ALL THE PERFECT NUMBER PRESENT IN AGIVEN SERIES
#include <iostream>
using namespace std;

class input{
    public:
    int n;
    void input_number()
    {
        cout<<"enter the number"<<endl;
        cin>>n;
    }
};

class perfect{
    public:
    input obj1;
    int sum(int i)
    {
        int s=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                s=s+j;
            }
        }
        return s;
    }
};
int main(){
    input obj1;
    perfect obj2;
    int start,end,s1;
    cout<<"enter start and end values"<<endl;
    cin>>start>>end;
    for(int i=start;i<=end;i++) 
    {
        int t=i;
       s1=obj2.sum(i);
    if(s1==t)
    {
        cout<<t<<endl;
    }
    }
}
