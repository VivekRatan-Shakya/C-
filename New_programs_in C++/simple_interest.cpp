#include<iostream>
using namespace std;
class A
{
    public:
    void interest()
    {
         int si,p,r,t;
         cout<<"Enter Interest Values:"<<endl;
         cin>>p>>r>>t;

         si=(p*r*t)/100;
         cout<<"The Simple Interest uis = "<<si;

    }
};
int main()
{
    A obj;
    obj.interest();
    return 0;
}