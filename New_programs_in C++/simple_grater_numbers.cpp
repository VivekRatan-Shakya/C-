#include<iostream>
using namespace std;
class A
{
   public:
   void show()
   {

    int  a,b,c;
    cout<<"Enter any NUmbers:"<<endl;
    cin>>a>>b>>c;
  
    if(a>=b&&a>=c)
    {
    cout<<"Grater Number"<<a;
    }

    else if(b>=a&&b>=c)
    {
    cout<<" Grater Number"<<b;
    }

    else if(c>=a&&c>=b)
    {
    cout<<"Grater Number"<<c;
    }
    

   }

};

int main()
{
 A obj;
 obj.show();  
 return 0;

}


