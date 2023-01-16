// #include<iostream>
// using namespace std;
// class X
// {
//     public:
//     void add()
//     {
//         int num,y,x,s=0;
//         cout<<"Enter any Numbers:"<<endl;
//         cin>>num;
//         x=num;
//        while(num>0)
//         {
//             y=num%10;
//             s=y+(s*10);
//             num=num/10;
//         }
//         if(x==s)
//         {
//             cout<<"Palindrome Numbers:"<<endl;
//         }
//         else
//         {
//            cout<<"Not Palindrome Numbers:";
//         }

//     }
// };
// int main()
// {
//     X obj;
//     obj.add();
//     return 0;
// }




//area of tringle
#include<iostream>
#include<math.h>
using namespace std;
class S
{   public:
    void tringle()
    {
       int a,b,c,s,area;
       cout<<"Enter any number :"<<endl;
       cin>>a>>b>>c;

        s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
       cout<<"The Result is = "<<area;
       }
};
int main()
{
    S obj;
    obj.tringle();
    return 0;
}
