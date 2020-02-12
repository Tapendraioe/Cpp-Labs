#include<iostream>
using namespace std;
class Final;
class Internal{
    private:
    float marks;
    public:
    void GetMarks()
    {
        cout<<"Enter marks in internal exam:";
        cin>>marks;
    }
    float CalculateTotalMarks(Final);
};
class Final
{
    private:
    float ex_marks;
    public:
    void GetExMarks()
    {
        cout<<"Enter External Marks:";
        cin>>ex_marks;
        
    }
    friend class Internal;

};
float Internal::CalculateTotalMarks(Final e) //being friend class calculatetotalmarks can access any data member of external
{
    float total;
    total=marks+e.ex_marks;
    return total;
}
int main()
{
    Internal a;
    Final e;
    float m;
    a.GetMarks();
    e.GetExMarks();
    m=a.CalculateTotalMarks(e);
    cout<<"Total Marks:"<<m;
}