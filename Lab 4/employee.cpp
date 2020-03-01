#include<iostream>
using namespace std;
class department{
    private:
    int department_id;
    string department_name;
    static int c;
    int n;
    public:
    department(int x,string y){
        department_id=x,
        department_name=y;
        n=++c;
        cout<<"Object"<<n<<" Created. \n";
        }
        ~department(){
            cout<<"\n object"<<n<<" goes out of scope";
        };
};
int department::c=0;
int main(){
    department d1(5,"Doece"),d2(10,"Doeme");
    return 0;
}