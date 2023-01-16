// swapping numbers without third variables;
#include<iostream>
using namespace std;
class A 
{
    public:
   void swap_without_variable()
 {
    int a,b;
    cout<<"Enter any values:"<<endl;
    cin>>a>>b;
    cout<<"Entered Before values"<<a<<"  "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;
   
    cout<<"result is = "<<a<<" "<<b;
 }
};
int main()
{
    A obj;
    obj.swap_without_variable();
    return 0;
}