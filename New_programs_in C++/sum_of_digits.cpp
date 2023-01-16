#include<iostream>
using namespace std;
class A
{
    public:
    void sum()
    {
        int r,s=0,num;
        cout<<"Enter any Numbers:";
        cin>>num;

        while(num>0)
        {
            r=num%10;
            s=s+r; 
            num=num/10;
        }
            cout<<s;
        
    }
};
int main()
{
     A obj;
     obj.sum();
     return 0;
}