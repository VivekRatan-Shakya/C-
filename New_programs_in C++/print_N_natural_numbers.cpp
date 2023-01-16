#include<iostream>
using namespace std;
class A
{
    public:
    void natural()
    {
       int num,i;
       cout<<"Enter any Numbers:"<<endl;
       cin>>num;

       for(i=1;i<=num;i++)
       {
        cout<<i;
        cout<<" ";
       }
    }
};
int main()
{
    A obj;
    obj.natural();
    return 0;
}