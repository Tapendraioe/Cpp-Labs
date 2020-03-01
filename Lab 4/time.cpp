#include<iostream>
using namespace std;
class time{
    private:
    int hour,min,sec;
    public:
    time(){hour=0,min=0,sec=0;}
    time(int x,int y,int z){hour=x,min=y,sec=z;}
    time addtime(time t1,time t2){
        t1.sec=t1.sec+t2.sec;
        if(t1.sec>60){
            t1.min++;
            t1.sec=t1.sec-60;
        }
        t1.min=t1.min+t2.min;
        if(t1.min>60){
            t1.hour++;
            t1.min=t1.min-60;
        }
        t1.hour=t1.hour+t2.hour;
        return t1;
    }
    void display()
    {
        cout<<hour<<":"<<min<<":"<<sec;
    }
};
int main(){
    time t1(2,31,15),t2(1,31,15),t3;
    t3=t3.addtime(t1,t2);
    t3.display();
   
}