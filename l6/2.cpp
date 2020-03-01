#include<iostream>
using namespace std;
class ft_in
{
    float feet,inch;
public:
    ft_in(float ft, float in)
    {
        feet=ft;
        inch=in;
    }
    ft_in()
    {
        feet=0;
        inch=0;
    }
    float get_feet()
    {
        return feet;
    }
    float get_inch()
    {
        return inch;
    }
    void display()
    {
        cout<<feet<<" feet & "<<inch<<" inch"<<endl;
    }

};
class m_cm
{
    float meter,centimeter;
public:
    m_cm(float m, float cm)
    {
        meter=m;
        centimeter=cm;
    }
    m_cm()
    {
        meter=0;
        centimeter=0;
    }
     operator ft_in()
    {
        float f,in,t,m;
        m=meter+(centimeter/100);
        t=m*3.28084;
        f=static_cast<int>(t);
        in=(t-f)*12;
        return ft_in(f,in);
    }
    m_cm(ft_in fin)
    {
        float m,cm,t,f;
        f=fin.get_feet()+(fin.get_inch()/12);
        t=0.3048*f;
        meter=static_cast<int>(t);
        centimeter=(t-meter)*100;
    }
    void display()
    {
        cout<<meter<<" meter & "<<centimeter<<" centimeter"<<endl;
    }

};

int main()
{
    m_cm a1(3,50),a2;
    ft_in b1(4,9),b2;
    b2=a1;
    a2=b1;
    b2.display();
    a2.display();
}