// temperature calcualte 

#include<iostream>
using namespace std;
class A
{
    public:
    void temperature()
    {
     int t,c;
      cout<<"Enter Temperature :"<<endl;
      cin>>c;
      t = (c*9)/5+32;
      cout<<"The Current Temperature is : = "<<t;
    }
};
int main()
{
    A obj;
    obj.temperature();
    return 0;

}