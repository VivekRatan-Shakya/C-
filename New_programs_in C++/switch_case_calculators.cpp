#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        int num1,num2,result;
        char choice;
        cout<<"Enter any Two Numbers:"<<endl;
        cin>>num1>>num2;

        cout<<"enter your choice +,-,*,/";
        cin>>choice;

        switch(choice)
        case '+':
        {
            result=num1+num2;
            cout<<"The Addition is = "<<result;
            break;
        
         case '-':
        
            result=num1-num2;
            cout<<"The Substraction is = "<<result;
            break;
         
        case '*':
        
            result=num1*num2;
            cout<<"The Multiplication is = "<<result;
            break;
        
        case '/':
       
          result=num1/num2;
          cout<<"The Devide is = "<<result;
          
        }
    }
};
int main()
{
     A obj;
     obj.show();
    return 0;
}