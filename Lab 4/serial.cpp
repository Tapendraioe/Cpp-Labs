#include<iostream>
using namespace std;
class serial
{
    static int serialNumber;
public:
    serial()
    {
        serialNumber++;
    }
     static void showNum(void)
    {
        cout<<"serial number:\t"<<serialNumber<<endl;

    }
};
int serial::serialNumber=0;
int main()
{
    serial ob1;
    serial::showNum();
    serial ob2;
    serial::showNum();
     serial;
    serial::showNum();

}