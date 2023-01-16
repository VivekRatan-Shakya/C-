#include<iostream>
using namespace std;
class A
{
    public:
    void prime()
    {
      int i,j,n1,n2;
      cout<<"Enter any Two Numbers:"<<endl;
      cin>>n1>>n2;
      for(i=n1;i<=n2;i++)
      {
      for(j=2;j<=i;j++)  
      {
        if(i%j==0)
         break;
      }
        if(i==j)
        {
            cout<<j<<" ";
        }
      }
    }
};
int main()
{
    A obj;
    obj.prime();
    return 0;
}