// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void love()
//     {
//        int i,j,k;
//        for(i=1;i<=5;i++)
//        {
//         for(j=1;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(k=i;k<=5;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//        }
//     }
// };
// int main()
// {
//     A obj;
//     obj.love();
//     return 0;
// }













// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void love()
//     {
//        int i,j,k;
//        for(i=1;i<=5;i++)
//        {
//         for(j=1;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(k=i;k<=5;k++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//        }
//     }
// };
// int main()
// {
//     A obj;
//     obj.love();
//     return 0;
// }









// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void love()
//     {
//        int i,j,k;
//        for(i=1;i<=5;i++)
//        {
//         for(j=i;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(k=i;k<=5;k++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//        }
//     }
// };
// int main()
// {
//     A obj;
//     obj.love();
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
        for(j=1;j<5;j++)
        {
            cout<<" ";
        }
        for(k=i;k<=5;k++)
        {
            cout<<j;
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