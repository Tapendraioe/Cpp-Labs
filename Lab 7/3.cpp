#include<iostream>
using namespace std;
 
 
class student
 
{
 
    protected:
 
        char name[20], faculty[40];
 
    public:
 
    /********************************************************************
 
    The assignment of function with 0 indicates the pure virtual
 
    function. It doesnot allow the creation of object of class Student
 
    but pointer to Student can be created. The Student is now Abstract
 
    class. To make a derive class concrete the member functions of Student
 
    should be overridden in derived classes. The base class is made abstract
 
    because it is most generic class so that we donot need its object.
 
    **********************************************************************/
virtual void SetData() = 0;
        virtual void ShowData() = 0;
};
class Engineering : public student
{
    public:
        void SetData()
        {
            cout<<"Engineering student "<<endl;
            cout<<"\nEnter the name of Student: ";
            cin>>name;
            cout<<"Enter Faculty: ";
            cin>>faculty;
        }
        void ShowData()
        {
            cout<<"Information of Engineering student:";
            cout<<"\nName : "<<name;
            cout<<"\nFaculty: "<<faculty;
        }
};
class Medicine : public student
{
    public:
        void SetData()
        {
            cout<<"Medicine student:"<<endl;
            cout<<"\nEnter the name of Student: ";
            cin>>name;
            cout<<"Enter Faculty: ";
            cin>>faculty;
        }
        void ShowData()
        {
            cout<<"\nInformation of Medicine student: ";
            cout<<"\nName : "<<name;
            cout<<"\nFaculty: "<<faculty;
        }
};
class Science : public student
{
    public:
        void SetData()
        {
            cout<<"\nScience student: "<<endl;
            cout<<"\nEnter the name of Student: ";
            cin>>name;
            cout<<"Enter Faculty: ";
            cin>>faculty;
        }
        void ShowData()
        {
            cout<<"\nInformation of Science student";
            cout<<"\nName : "<<name;
            cout<<"\nFaculty: "<<faculty;
        }
};int main()
{
    student *st[3];
    st[0] = new Engineering;
    st[1] = new Medicine;
    st[2] = new Science;
    for(int i = 0; i<3; i++)
    {
        st[i]->SetData();
    }
    for(int i = 0; i< 3; i++)
    {
        st[i]->ShowData();
    }
    return 0;
}