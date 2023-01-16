#include<iostream>
using namespace std;
class A
{
 public:
 void reverse()
 {
    int num,s;
    cout<<"Enter any Numbers:"<<endl;
    cin>>num;

    while(num>0)
    {
      s=num%10;
      cout<<s;
      num=num/10;

    }
 }
};
int main()
{
    A obj;
    obj.reverse();
    return 0;
}