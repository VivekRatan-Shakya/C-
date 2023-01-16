#include<iostream>
using namespace std;
struct stu
{
 int roll; float per; char name[20]; int age; float marks; 

};
int main()
{
    struct stu s;
    cout<<"Enter Student_Name :"<<endl;
    cin>>s.name;
    cout<<"Enter Student_rollNumber :"<<endl;
    cin>>s.roll;
    cout<<"Enter Student_marks :"<<endl;
    cin>>s.marks;
    cout<<"Enter Student_age :"<<endl;
    cin>>s.age;
    
     s.per=s.marks/5;
    cout<<"Student_Name is =:"<<s.name<<endl;
    cout<<"Student_RollNumber is =:"<<s.roll<<endl;
    cout<<"Student_Marks is =:"<<s.marks<<endl;
    cout<<"Student_age is =:"<<s.age<<endl;
    cout<<"Student_percentage is =:"<<s.per<<endl;
    
    return 0;
}