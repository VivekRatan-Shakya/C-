// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void avd()
//     {
//        float pen, pencil,eraser,total;
//        cout<<"Enter Item Amount:"<<endl;
//        cin>>pen>>pencil>>eraser;

//       total=pen+pencil+eraser;
//       cout<<"The total Amount is : = "<<total<<endl;

//       float total2=total+(0.18f*total);
//       float total3=(0.18f*total);

//      cout<<"The Total tax is : = "<<total3<<endl;
//      cout<<"The Result is : = "<<total2;
      
// }
// };
// int main()
// {   A obj;
//     obj.avd();
//     return 0;
// }











// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void avd()
//     {
//        float area,a;
//        cout<<"Enter Values :"<<endl;
//        cin>>a>>a;

//        //area=(3.14(a*a));
//         cout<<"result"<<area;
//         area=3.14(a*a*a);
      
// }
// };
// int main()
// {   A obj;
//     obj.avd();
//     return 0;
// }








#include<iostream>
using namespace std;
class A
{
    public:
    void love()
    {
      int i,j,k;

      for(i=1;i<=5;i++)  
      {
        for(j=i;j<5;j++)
        {
            cout<<" ";
        }
        for(k=i;k<=5;k++)
        {
            cout<<"*";
        }
        cout<<endl;
      }
    }
};
int main()
{
    A obj;
    obj.love();
    return 0;
}
