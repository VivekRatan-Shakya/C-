#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    void pattern()
    {
       char str[10];
       int i,j,len;
       cout<<"Enter any String:"<<endl;
       cin>>str;
       len=strlen(str);
       for(i=0;i<len;i++)
      {
        for(j=0;j<=i;j++)
       {
        cout<<str[j];
      }
      {
        cout<<endl;
      }

    }
    }
};
int main()
{
    A obj;
    obj.pattern();
    return 0 ;
}
