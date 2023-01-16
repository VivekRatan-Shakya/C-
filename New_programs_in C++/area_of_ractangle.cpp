// #include<iostream>
// using namespace std;
// class A 
// {
//     public:
//     void rectangle()
//     {
//       int area,l,d;
//       cout<<"Enter Value:"<<endl;
//       cin>>l>>d;
//       area=l*d;
//       cout<<"The Result is = "<<area;

//     }
// };
// int main()
// {
//     A obj;
//     obj.rectangle();
//     return 0;
// }


///  squre calculate

// #include<iostream>
// using namespace std;
// class A 
// {
//     public:
//     void rectangle()
//     {
//       int area,l;
//       cout<<"Enter Value:"<<endl;
//       cin>>l;
//       area=l*l;
//       cout<<"The Result is = "<<area;

//     }
// };
// int main()
// {
//     A obj;
//     obj.rectangle();
//     return 0;
// }





/// tringle calculate 



#include<iostream>
using namespace std;
class A 
{
    public:
    void rectangle()
    {
      int s,area,a,b,c;
      cout<<"Enter Value:"<<endl;
      cin>>a>>b>>c;
      s=(a+b+c)/2;
      area=s*(s-a)*(s-b)*(s-c);
      cout<<"The Result is = "<<s<<endl;;
      cout<<"The Tringale is = "<<area;

    }
};
int main()
{
    A obj;
    obj.rectangle();
    return 0;
}
