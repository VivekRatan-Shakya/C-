#include<iostream>
using namespace std;
class B
{
    public:
     void love()
     {
        int j,num,x=0,y=1,add;
        cout<<"Enter any Number:"<<endl;
        cin>>num;

        for(j=1;j<=num;j++)
        {
            cout<<x;
            cout<<"  ";
            add=x+y;
            x=y;
            y=add;


        }
     }
};
int main()
{
    B obj;
    obj.love();
    return 0;
}






// #include<iostream>
// using namespace std;
// class Z
// {
//     public:
//     void show()
//     {
//         int i,num, count=0;
//         cout<<"Enter any Number:"<<endl;
//         cin>>num;

//         for(i=1;i<=num;i++)
        
//             if(num%i==0)
//         {
//             count++;
//         }
    
//      if(count==2)
//      {
//         cout<<"Prime:";
//      }
//      else
//      {
//         cout<<"Not Prime:";
//      }
// }
// };
// int main()
// {
//     Z obj;
//     obj.show();
//     return 0;
// }













