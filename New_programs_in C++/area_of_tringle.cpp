#include<iostream>
#include<math.h>
using namespace std;
class A
{
    public:
    void palindrome()
    {

      int x,num,s=0,r;
      cout<<"Enter any Number:"<<endl;
      cin>>num;
       x=num
     while(num>0)
     {
        r=num%10;
        s=r+(s*10);
        num=num/10;
     }
     if(x==s)
     {
        cout<<"palindrome";
     }
     else
     {
        cout<<"not";
     }
}
};
int main()
{
    A obj;
    obj.palindrome();
    return 0;
}