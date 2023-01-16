#include<iostream>
using namespace std;
class A
{
    public:
    void armstrong()
    {
     int num,x,arm=0,r;
     cout<<"Enter any Numbers:"<<endl;
     cin>>num;
     x=num;
     while(num>0)
     {
        r=num%10;
        arm=(r*r*r)+arm;
        num=num/10;
     }
     if(x==arm)
     {
        cout<<"Armstong Numbers ";
     }
     else
     {
           cout<<" Not Armstrong ";
     }
    }
};
int main()
{
    A obj;
    obj.armstrong();
    return 0;
}