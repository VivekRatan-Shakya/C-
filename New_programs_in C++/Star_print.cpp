#include<iostream>
using namespace std;
class A
{
    public:
    void star()
    {
      int i,j;
     for(i=1;i<=5;i++)
     {
        for(j=1;j<=i;j++)
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
    obj.star();
    return 0;
}

////// reverse patter fo star



// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void star()
//     {
//       int i,j;
//      for(i=1;i<=5;i++)
//      {
//         for(j=i;j<=5;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//      }

//     }
// };
// int main()
// {
//     A obj;
//     obj.star();
//     return 0;
// }


