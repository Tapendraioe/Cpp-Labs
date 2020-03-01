#include<iostream>
using namespace std;
class shape{
public:
  shape(){
    cout << "Base Constructor" << '\n';
  }
//virtual functions
  virtual void area(){
    cout << "Base Area function" << '\n';
  }
  virtual void display(){
    cout << "Base display function" << '\n';
  }
//virtual destructor
  virtual ~shape(){
    cout << "Base Destructor" << '\n';
  }

};

class circle:public shape{

float radius,areaC;

public:
  circle(float r=0){
    radius=r;
  }
  void area(){
    areaC=3.1415*radius*radius;
  }
  void display(){
    cout << "Area of circle is " <<areaC <<'\n';
  }
  ~circle(){
    cout << "\nCircle Destructor" << '\n';
  }
};

class rectangle:public shape{

float length , breadth, areaR;

public:
  rectangle(float l=0,float b=0){
    length=l;
    breadth=b;
  }
  void area(){
    areaR=length*breadth;
  }
  void display(){
    cout << "Area of rectangle is"<<areaR << '\n';
  }
  ~rectangle(){
    cout << "\nRectangle Destructor" << '\n';
  }
};

class trapezoid:public shape{

float longBase,shortBase,altitude,areaT;
public:

  trapezoid(int a=0,int b=0,float h=0){
    longBase=a;
    shortBase=b;
    altitude=h;
  }
  void area(){
    areaT=((longBase+shortBase)/2)*altitude;
  }
  void display(){
    cout << "Area of trapezoid is "<<areaT << '\n';
  }
  ~trapezoid(){
    cout << "\nTrapezoid Destructor" << '\n';
  }
};


int main() {
//pointer of base class(i.e. shape class)
  shape* ptr;

//circle class
  circle c(2);
  ptr =&c;
  ptr->area();
  ptr->display();

//rectangle class
  rectangle r(2,4);
  ptr=&r;
  ptr->area();
  ptr->display();

//trapezoid class
  trapezoid t(2,4,.5);
  ptr=&t;
  ptr->area();
  ptr->display();

  return 0;
}