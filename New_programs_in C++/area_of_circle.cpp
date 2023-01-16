#include<iostream>
using namespace std;
class A
{
    public:
    void area()
    {
       int area,r;
       cout<<"Enter any Numbers:"<<endl;
       cin>>r;
      area=(3.14*r*r);
      cout<<"The result is = :"<<area;
    }
};
int main()
{
    A obj;
    obj.area();
    return 0;
}