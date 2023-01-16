#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    void pattern()
    {
  
      char str[]="Ramjeet";
      int i,j,len;
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
