#include<iostream>
using namespace std;
class coord2;
class coord1
{
    private:
    int x,y;
public:
    coord1 (int a,int b)
    {
        x=a;
        y=b;
    }
    friend void add(coord1 ob1, coord2 ob2);
    friend void sub(coord1 ob1, coord2 ob2);
    friend void mul(coord1 ob1, coord2 ob2);
    friend void div(coord1 ob1, coord2 ob2);

};
class coord2
{
    private:
     int x,y;
public:
    coord2 (int a,int b)
    {
        x=a;
        y=b;
    }
    friend void add(coord1 ob1, coord2 ob2);
    friend void sub(coord1 ob1, coord2 ob2);
    friend void mul(coord1 ob1, coord2 ob2);
    friend void div(coord1 ob1, coord2 ob2);
   
};
void add(coord1 ob1, coord2 ob2)
{
    cout<<"Sum of coordinates:"<<endl<<"x="<<ob1.x+ob2.x<<endl<<"y="<<ob1.y+ob2.y<<endl;

}
void sub(coord1 ob1, coord2 ob2)
{
    cout<<"Difference of coordinates:"<<endl<<"x="<<ob1.x-ob2.x<<endl<<"y="<<ob1.y-ob2.y<<endl;

}
void mul(coord1 ob1, coord2 ob2)
{
    cout<<"Product of coordinates:"<<endl<<"x="<<ob1.x*ob2.x<<endl<<"y="<<ob1.y*ob2.y<<endl;

}
void div(coord1 ob1, coord2 ob2)
{
    cout<<"Division of coordinates:"<<endl<<"x="<<static_cast<float>(ob1.x)/ob2.x<<endl<<"y="<<static_cast<float>(ob1.y)/ob2.y<<endl;

}

int main()
{
    coord1 ob1(5,10);
    coord2 ob2(15,2);
    add(ob1,ob2);
    sub(ob1,ob2);
    mul(ob1,ob2);
    div(ob1,ob2);
    
}