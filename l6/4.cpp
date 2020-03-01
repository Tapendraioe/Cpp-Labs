#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
public:
    void display()
    {
        cout<<"The address of the object in person class is: "<<this<<endl;
        cout<<"The size of the object in person class is: "<<sizeof(this)<<endl;
    }
};
class Student:public Person
{
    int roll_no;
    int grade;
public:

    void display()
    {
        cout<<"The address of the object in student class is: "<<this<<endl;
        cout<<"The size of the object in student class is: "<<sizeof(this)<<endl;
    }
};
class Employee:public Person
{
    int employee_id;
    float salary;
public:
    void display()
    {
        cout<<"The address of the object in employee class is: "<<this<<endl;
        cout<<"The size of the object in employee class is: "<<sizeof(this)<<endl;
    }
};
int main()
{
    Person pobj1,pobj2;
    Student sobj1,sobj2;
    Employee eobj1,eobj2;
    pobj1.display();
    pobj2.display();
    sobj1.display();
    sobj2.display();
    eobj1.display();
    eobj2.display();
    return 0;
}