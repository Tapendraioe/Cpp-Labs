#include <iostream>
using namespace std;
class prime
{
    private:
        int num;
    public:
        void setdata(int);
        bool check();
};
void prime::setdata(int a)
        {
            num=a;
        }
int main()
{
    prime p;
    int x;
    char ch;
    do
    {

        cout<<endl<<"Enter number to check whether it is prime or not:\t";
        cin>>x;
        p.setdata(x);
        if(p.check()==true)
        {
            cout<<endl<<"It is prime"<<endl;

        }
        else
        {
            cout<<"It is not prime"<<endl;
        }
        cout<<"Do you want to do another checking?(y/n)";
        cin>
        >ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
bool prime::check()
{
    int flag=0;
    for (int i=3;i<num;i++)
    {
        if((num%i)==0)
         {
        return false;
    }
    else if(num==2)
    cout<<endl<<"It is prime";
    else
    {
        return true;
    }
      //  {
        //    flag=flag+1;                //if the given number is divisible by any number between 2 and (given number - 1) then it is not prime
            //break;
        //}
    }
    //if(flag==0)
 return 0;
}