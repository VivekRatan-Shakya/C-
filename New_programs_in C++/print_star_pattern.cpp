// #include<iostream>
// using namespace std;
// int i,j;
// class A
// {
//     public:
//     void add()
//     {cout<<"The Natural Numbers:"<<endl;
      
//       for(i=0;i<=10;i++)
//       cout<<i<<endl;
//       for(j=1;j<=7;j++)
//       cout<<j;
//       }
// };
// int main()
// {
//     A obj;
//     obj.add();
//     return 0;
// }








#include<iostream>
using namespace std;
int i,j;
class A
{
    public:
    void add()
    {
       cout<<"print Star Pattern"<<endl;
       for(i=1;i<=10;i++)
      {
        for(j=1;j<=i;j++)
            cout<<"*";
            cout<<endl;
      } 
    }
void add1()
    {
       cout<<"print Star Pattern Numbers:"<<endl;
       for(i=1;i<=10;i++)
      {
        for(j=1;j<=i;j++)
            cout<<"5";
            cout<<endl;
      } 
    }
      
      
     
};
int main()
{
    A obj;
    obj.add();
    obj.add1();
    return 0;
}