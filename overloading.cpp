//Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. 
//Use pass by reference in any one of the function above.
#include<iostream>
using namespace std;
float noarg(){
    float feets;
    cout<<"Enter the value in feets(no arg): ";
    cin>>feets;
    return feets*12;
}
float oarg(float feet)
{
    return feet*12;

}
float twoarg(float ft,float inch){
    return ft*12 + inch;
    
}
int main(){
    float feet,inches;
    cout<<"Enter the value in feets:\n";
    cin>>feet;
    cout<<"Enter the inches:\n";
    cin>>inches;
    cout<<"No arg:"<<noarg()<<"\n";
    cout<<"one arg:"<<oarg(feet)<<"\n";
    cout<<"two arg:"<<twoarg(feet,inches);
}