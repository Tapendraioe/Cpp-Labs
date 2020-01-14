#include<iostream>
using namespace std;
float &max(float &a,float &b);
int main(){
    float temp1,temp2;
    cout<<"Enter two temperatures:";
    cin>>temp1>>temp2;
    float &p=temp1;
    float &q=temp2;
    max(p,q)=100;
    cout<<"The temperatures changed are: "<<temp1<<" and "<<temp2;
}
float &max(float &a,float &b){
    if(a>b){
        return a;}
    
    else
    {
        return b;
    }
    
}