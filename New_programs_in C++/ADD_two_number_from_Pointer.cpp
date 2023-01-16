#include<iostream>
using namespace std;
class A
{
    public:
    void pot()
    {
    int *x,*y,a,b;
    
     cout<<"Enter Two Numbers:"<<endl;
     cin>>a>>b;
      
      x=&a;
      y=&b;

         int g=*x+*y;
         cout<<"The  Result is = "<<g;
    }
};
int main()
{
    A obj;
    obj.pot();
    return 0;
}
