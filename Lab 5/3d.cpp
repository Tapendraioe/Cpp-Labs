#include<iostream>
using   namespace std;
class vect2;
class vect1
{
    int x,y,z;
public:
    vect1(int a,int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    friend void operator + (vect1,vect2);
    friend void operator - (vect1,vect2);
};
class vect2
{
    int x,y,z;
public:
    vect2(int a,int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
 friend void operator + (vect1,vect2);
friend void operator - (vect1,vect2);
};

void operator + (vect1 ob1, vect2 ob2)
{
    cout<<"Sum of vectors: ("<<ob1.x+ob2.x<<','<<ob1.y+ob2.y<<','<<ob1.z+ob2.z<<')'<<endl;
}
void operator - (vect1 ob1, vect2 ob2)
{
    cout<<"Difference of vectors: ("<<ob1.x-ob2.x<<','<<ob1.y-ob2.y<<','<<ob1.z-ob2.z<<')'<<endl;
}
int main()
{
    vect1 ob1(0,3,9);
    vect2 ob2(1,9,6);
    ob1+ob2;
    ob1-ob2;
}