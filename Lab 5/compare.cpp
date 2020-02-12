#include <iostream>
using namespace std;
 
class number
{
private:
    int x;
 
public:
    number(int a){
        x=a;
    }
    friend bool operator== (number compare1, number compare2);
    friend bool operator!= (number compare1, number compare2);

};
 
bool operator== (number compare1, number compare2)
{
    return (compare1.x== compare2.x);
}
 
bool operator!= (number compare1, number compare2)
{
    return !(compare1== compare2);
}

 
int main()
{
    number Num1{100};
    number Num2{90};
 
    if (Num1 == Num2)
        cout << "Num1 and Num2 are equal.\n";

    if (Num1 != Num2)
        cout << "Num1 and Num2 are not equal.\n";

 
    return 0;
}