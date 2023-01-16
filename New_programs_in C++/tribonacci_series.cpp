#include<Iostream>
using namespace std;
class S
{   public:
    void show()
    {
    int a=0,b=1,c=2,num,i,add;
    cout<<"Enter any Numbers:"<<endl;
    cin>>num;
for(i=1;i<=num;i++)
  {
    cout<<a;
    cout<<" ";
 add=a+b+c;
    b=c;
    a=b;
    c=add;
    }
 }
};
int main()
{
    S obj;
    obj.show();
    return 0;
}