#include<iostream>
using namespace std;
class A
{
    public:
 void show()
 {
    int y;
    cout<<"Enter a any Year:"<<endl;
    cin>>y;

    if(y%4==0)
    {
      cout<<"That is Leap Year:"<<endl;
    }
    else
    {
         cout<<"Not Leap Year:"; 
    }
 }

};
int main()
{

 A obj;
 obj.show();
    return 0;
}