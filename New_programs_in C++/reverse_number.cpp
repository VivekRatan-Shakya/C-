#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        int num,r;
        cout<<"Enter a any Numbers:"<<endl;
        cin>>num;
        
        while(num>0)
        {
        r=num%10;
        cout<<r;
        num=num/10;
        }
        
    }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}