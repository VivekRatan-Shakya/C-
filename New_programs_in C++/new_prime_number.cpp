#include<iostream>
using namespace std;
class A
{
    public:
    void add()
    {
      int j,n,count=0;
      cout<<"Enter any Number:";
      cin>>n;
      {
        for(j=1;j<=n;j++)
        
        if(n%j==0)
        {
           count++;
        }
        
          }
   if(count==2)
   {
    cout<<"is A Prime:";
   }
   else
   {
    cout<<"is A not Prime:";
   }
    }
};
int main()
{
    A obj;
    obj.add();
    return 0;
}