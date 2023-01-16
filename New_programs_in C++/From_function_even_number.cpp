#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        int num;
        cout<<"Enter any Numbers:"<<endl;
        cin>>num;

        if(num%2==0)
       {
        cout<<"Even Number:"<<endl;
       }
       else
       {
         cout<<"Odd Number:";
       }
    }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}