#include<iostream>

using namespace std;

class vehicle
{
    private:
    int num_vehicle;
    float hour, rate;
public:
    vehicle(int n, float h, float r): num_vehicle(n), hour(h), rate(r) {}
    vehicle(vehicle& v1)
    {
        hour = v1.hour;
        num_vehicle = v1.num_vehicle;
        rate = v1.rate;
    }
    float totalcharge()
    {
        if(num_vehicle >= 10)
            return num_vehicle*hour * rate * 0.9;
        else
            return num_vehicle*hour * rate;
    }
    void display()
    {
        cout << "The number of vehicles is " << num_vehicle <<"\n Parking Hour: "<< hour <<"\nRate:\t" << rate << "\ntotal charge is:" << totalcharge();
    }
};

int main()
{
    int n;
    float h, r;
    cout << "Enter the number of vehicles:\t";
    cin >> n;
    cout << "Enter parking hours:\t";
    cin >> h;
    cout << "Enter the charge rate:\t";
    cin >> r;
    vehicle v1(n, h, r);
    vehicle v2(v1);
    v1.totalcharge();
    v2.display();
}