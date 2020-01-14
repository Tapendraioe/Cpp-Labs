#include<iostream>
using namespace std;
class chiz{
    private:
    int data;
    public:
    chiz( int a=0){data=a;}
    //int getdata(){return data;};NonConst Function
    int getdata(){return data;}
    };
    int main(){

       chiz t(10); 
       //const chiz t; non const functions can't be called by const objects
      cout<<t.getdata(); 
        return 0;
    }
