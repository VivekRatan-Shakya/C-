#include<iostream>
using namespace std;
class A
{
    public:
    void grater()
    {
      int a,b,c;
      cout<<"Enter any Three Numbers:"<<endl;
      cin>>a>>b>>c;

  if(a>b&&a>c)
  {
    cout<<"is a Grater Numbers:"<<a;
  }
  else if(b>a&&b>c)
  {
    cout<<"is a Grater Numbers:"<<b;
  }
else if (c>a&&c>b)
    {
      cout<<"is a Grater Numbers:"<<c;
    }
    }
};
int main()
{
    A obj;
    obj.grater();
    return 0;
}
