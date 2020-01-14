#include<iostream>
using namespace std;
namespace square
{
    int num;
    int fun(int b){
        return b*b;
    }
};
namespace cube
{
    int num;
    int fun(int a){
        return a*a*a;
    }
};
int main(){
    square::num=3;
    cube::num=6;
    cout<<"Square of "<<cube::num<<" is "<<square::fun(cube::num)<<"\n";
    cout<<"Cube of "<<square::num<<" is "<<cube::fun(square::num)<<"\n";

}
