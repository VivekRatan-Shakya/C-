//swappinh numbers using third variables;
#include<iostream>
using namespace std;
class A
{
    public:
    void swap()
    {
       int n1,n2,temp;
       cout<<"Enter any Two Numbers:"<<endl;
       cin>>n1>>n2;
       cout<<"Entered Values Before:"<<n1<<" "<<n2<<endl;
       temp=n1;
       n1=n2;
       n2=temp;
       cout<<"result is = "<<n1<<endl;
       cout<<" result is = "<<n2;
       }
};
int main()
{
    A obj;
    obj.swap();
    return 0;
}
