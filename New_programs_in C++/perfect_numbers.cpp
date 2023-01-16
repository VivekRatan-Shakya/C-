#include<iostream>
using namespace std;
class Z
{
    public:
    void perfect()
    {
       int num,i,s=0;
       cout<<"Enter any Numbers:"<<endl;
       cin>>num;

       for(i=1;i<num;i++)
       {
        if(num%i==0)
        {
            s=s+i;

        }
        if(num==s)
        {
            cout<<"perfect Numbere:"<<endl;
        }
        else
        {
            cout<<"not perfect Number:";
        }
       }

    }
};
int main()
{
    Z obj;
    obj.perfect();
    return 0;
}