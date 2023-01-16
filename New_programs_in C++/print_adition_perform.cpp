#include<iostream>
using namespace std;
class A
{
    public:
    void add()
    {
       int x=10,y=5;
       int exp1 =(y * (x / y + x / y));
      // int exp2 = (y *( x / y + y * x / y));
        int exp2 = (y * x / y + y * x / y);

       cout<<"result is 1: = "<<exp1<<endl;
       cout<<" result is 2: = "<<exp2;
}
};
int main()
{   A obj;
   obj.add();

    return 0;
}