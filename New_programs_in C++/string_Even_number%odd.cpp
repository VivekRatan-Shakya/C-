#include<iostream>
using namespace std;
class A
{
    public:
    void ter()
    {
     int num;
     string sum;
     cout<<"Enter any Two Numbers:"<<endl;
     cin>>num;
         
         sum=(num%2==0)?"Even":"Odd";
         cout<<"Result is = "<<sum;
    }
};
int main()
{
     A obj;
     obj.ter();
    return 0;
}
