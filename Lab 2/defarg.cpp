#include<iostream>
using namespace std;
float incr_salary(float,float=12);
int main()
{
    float salary,increment;
    cout<<"Increased salary of chief executive officer is "<<incr_salary(35000,9);
    cout<<"\nIncreased salary of information officer is "<<incr_salary(25000,10);
    cout<<"\nIncreased salary of system analyst is "<<incr_salary(24000);
    cout<<"\nIncreased salary of Programmer is "<<incr_salary(18000);

}
float incr_salary(float prev_sal, float rate)
{
    return(prev_sal+prev_sal*rate/100);
}