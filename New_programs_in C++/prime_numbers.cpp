#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        int i,num,count=0;
        cout<<"ente any Numbers:"<<endl;
        cin>>num;
     {
        for(i=1;i<=num;i++)
        
            if(num%i==0)
               {
                   count++;
               }
    }

    if(count==2)
    {
        cout<<"Prime Number:";
    }
    else
    {
        cout<<"Not Prime Number:";
    }
    }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}