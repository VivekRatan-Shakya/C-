#include<iostream>
using namespace std;
class A
{
    public:
    void pattern()
    {
      int i,j,k;
      for(i=1;i<=5;i++)
      {
        for(j=i;j<5;j++)  
        {
            cout<<" ";      
        }
        for(k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    } }
};
int main()
{
    A obj;
    obj.pattern();
    return 0;
}
