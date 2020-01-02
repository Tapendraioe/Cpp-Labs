#include<iostream>
using namespace std;
inline void display(float);
int main(){
    int salary;
    cout<<"Enter salary:\t";
    cin>>salary;
    display(salary);
    return 0;

}
void display(float salary){
    float pay;
    pay=salary-0.1*salary;
    cout<<"Payment is: "<<pay;
}