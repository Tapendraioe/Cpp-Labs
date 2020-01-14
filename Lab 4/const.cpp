#include<iostream>
using namespace std;
class chiz{
    private:
    int data;
    public:
    chiz( int a=0){data=a;}
    //int getdata(){return data;};NonConst Function
    int getdata() const {return data;}
    };
    int main(){

      chiz t(100);
      cout<<t.getdata(); 
        return 0;
    }
