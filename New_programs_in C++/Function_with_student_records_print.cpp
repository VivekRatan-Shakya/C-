#include<iostream>
using namespace std;
class A
{ public:
   void show()
{
     struct stu;
     int roll; float per; char name[20]; int age; float marks; 
    struct stu;
    cout<<"Enter Student_Name :"<<endl;
    cin>>name;
    cout<<"Enter Student_rollNumber :"<<endl;
    cin>>roll;
    cout<<"Enter Student_marks :"<<endl;
    cin>>marks;
    cout<<"Enter Student_age :"<<endl;
    cin>>age;
    
     per=marks/5;
    cout<<"Student_Name is =:"<<name<<endl;
    cout<<"Student_RollNumber is =:"<<roll<<endl;
    cout<<"Student_Marks is =:"<<marks<<endl;
    cout<<"Student_age is =:"<<age<<endl;
    cout<<"Student_percentage is =:"<<per<<endl; 
    }
 };
int main()
{
    A obj;
    obj.show();
    return 0;
}