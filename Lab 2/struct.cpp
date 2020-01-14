#include<iostream>
using namespace std;
struct date{
    int dd,mm,yy;

};
int show(date x)
{
    cout<<x.mm<<"/"<<x.dd<<"/"<<x.yy;
    return 0;
}
int main()
{
    date di;
    cout<<"Enter the day:";
    cin>>di.dd;
    cout<<"Enter the month:";
    cin>>di.mm;
    cout<<"Enter the year:";
    cin>>di.yy;
    show(di);

}
