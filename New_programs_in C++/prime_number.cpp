#include<iostream>
using namespace std;
class A
{
    public:
    void prime()
    {
     int num,r,s=0,x;
    cout<<"Enter any Numbers:"<<endl;
    cin>>num;
    x=num;
while(num>0)
{
     r=num%10;
     s=r+(s*10);
     num=num/10;
}
    if(x==s)
    {
        cout<<"prime";
    }
    else
    {
        cout<<" not prime";
    }
    } 
};
int main()
{
    A obj;
    obj.prime();
    return 0;
}