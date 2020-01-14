#include<iostream>
using namespace std;
class centigrade{
    private:
    float ftemp;
    public:
    void setTemp(float);
    float getCtemp();
    };
class fahrenheit{
    private:
    float ctemp;
    public:
    void setTemp(float);
    float getFtemp();
    };
void centigrade::setTemp(float f){
    ftemp=f;
}
void fahrenheit::setTemp(float c){
    ctemp=c;
}
float centigrade::getCtemp(){
    return (ftemp-32)/1.8;
}
float fahrenheit::getFtemp(){
    return 1.8*ctemp+32;
}
int main(){
    int a,b;
    centigrade c;
    cout<<"Enter the temperature in F:";
    cin>>a;
    c.setTemp(a);
    fahrenheit f;
    cout<<"Enter the temperature in C:";
    cin>>b;
    f.setTemp(b);
    cout<<"The converted temperature is "<<c.getCtemp()<<"C and "<<f.getFtemp()<<"F.";
}
