#include<iostream>
using namespace std;
class A
{
   
     public:
    void show()
   {   int a,b,c;
      cout<<"Enter any two  Numbers:"<<endl;

      cin>>a>>b;
      c=a+b;
      cout<<"The Result is = "<<c;
   }
};
int main()
{

A obj;
obj.show();
    return 0;
}

