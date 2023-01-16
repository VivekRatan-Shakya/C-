#include<iostream>
using namespace std;
class A
{    public:
     void tax()
    {    float amount,tax;
         cout<<"Enter Your Salary Amount:"<<endl;
         cin>>amount;

     if(amount>=100000&&amount<=500000)
        {
            tax=(amount*0.00);
            amount=amount-tax;
            cout<<"Your Tax Charge Details:"<<endl;
            cout<<"The Total tax is = "<<tax<<".00"<<endl;
            cout<<"The Saving Amount is = "<<amount;
        }
     else if(amount>=500000&&amount<=1000000)
        {
            tax=(amount*0.05);
            amount=amount-tax;
             cout<<"Your Tax Charge Details:"<<endl;
            cout<<"The Total tax is = "<<tax<<".00"<<endl;
            cout<<"The Saving Amount is = "<<amount;
       }
    else if(amount>=1000000&&amount<=2000000)
     {
           tax=(amount*0.10);
            amount=amount-tax;
             cout<<"Your Tax Charge Details:"<<endl;
            cout<<"The Total tax is = "<<tax<<".00"<<endl;
            cout<<"The Saving Amount is = "<<amount;
     }
     else if(amount>=2000000&&amount<=8000000)
     {
            tax=(amount*0.17);
            amount=amount-tax;
             cout<<"Your Tax Charge Details:"<<endl;
            cout<<"The Total tax is = "<<tax<<".00"<<endl;
            cout<<"The Saving Amount is = "<<amount;
    }
    else
    {
        cout<<"Sorry...!! No Tax This Amount:";
    }
 }
};
int main()
{
    A obj;
    obj.tax();
    return 0;
}






// #include<iostream>
// using namespace std;
// class A 
// {
//     public:
//     void prt()
//     {
      
//       int a,b,c;
//       cout<<"Enter any Three Numbers:"<<endl;
//       cin>>a>>b>>c;

//       if(a>=b&&a>=c)
//       {
//         cout<<"  A "<<a;
//       }
//     else  if(b>=c&&b>=a)
//       {
//         cout<<" B "<<c;
//       }
//       else
//       {
//         cout<<" C"<<c;
//       }
//     }
// };
// int main()
// {
//     A obj;
//     obj.prt();
//     return 0;
// }