#include<iostream>
using namespace std;
class A
{
     public:
     void show()
     {
        int a,b,sum;
        char choice;
      cout<<"Enter any Numbers:"<<endl;
      cin>>a>>b;


    cout<<"Enter your choice +,-,*,/"<<endl;  
    cin>>choice;
   switch(choice)
    {
         case '+':
         sum=a+b;
         cout<<"Result is = "<<sum;
         break;

         case '-':
         sum=a-b;
         cout<<"Result is = "<<sum;
         break;

         case '*':
         sum=a*b;
         cout<<"The result is = "<<sum;
         break;

         case '/':
         sum=a/b;
         cout<<"result is ="<<sum;
         break;
    }


     }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}