#include <iostream>
using namespace std;

class perfect{
    public:
    int n,i,sum=0;
    void check()
    {
        cout<<"enter the number"<<endl;
        cin>>n;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
    }
};
int main(){
    perfect obj;
    obj.check();
    int s = obj.sum;
    if(s==obj.n)
    {
        cout<<"it is a perfect number"<<endl;
    }
    else{
        cout<<"not a perfect number";
    }
}