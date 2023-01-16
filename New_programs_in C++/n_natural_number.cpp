#include<iostream>
using  namespace std;
class A
{
  public:
  void show()
  {
    int i,num;
    cout<<"Enter any Number:"<<endl;
    cin>>num;

    for(i=1;i<=num;i++)

    {
        cout<<i;
        cout<<" ";
    }
  }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}