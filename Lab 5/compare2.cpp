#include<iostream>
using namespace std;
class number
{
    int x;
public:
    number(int a)
    {
        x=a;
    }
    bool operator == (number compare2)
    {
        cout<<"For "<<x<<" == "<<compare2.x<<endl;
       cout<< (x== compare2.x);
    }
   bool operator > (number compare2)
    {
        cout<<"\nFor "<<x<<" > "<<compare2.x<<endl;
       cout<<(x> compare2.x);
    }
    bool operator < (number compare2)
    {
        cout<<"\nFor "<<x<<" < "<<compare2.x<<endl;
       cout<<(x< compare2.x);
    }
    bool operator >= (number compare2)
    {
        cout<<"\nFor "<<x<<" >= "<<compare2.x<<endl;
       cout<<(x>= compare2.x);
    }
    bool operator <= (number compare2)
    {
        cout<<"\nFor "<<x<<" <= "<<compare2.x<<endl;
       cout<<(x<= compare2.x);
    }
    bool operator != (number compare2)
    {
        cout<<"\nFor "<<x<<" != "<<compare2.x<<endl;
       cout<<!(x== compare2.x);
    }

};
int main()
{
    number compare1{89};
    number compare2{89};
    cout<<"The results 1=True,0=False"<<endl;
    compare1==compare2;
    compare1>=compare2;
   compare1<=compare2;
   compare1>compare2;
   compare1<compare2;
  compare1!=compare2;
  
}