#include<iostream>
using namespace std;
class A
{
       public:
       void show()
       {
           int  a[7];
           cout<<"Enter Any Array Eliments:";
           cin>>a;
           cout<<"The result is = "<<a;
           
        }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}