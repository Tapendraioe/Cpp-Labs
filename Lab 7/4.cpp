/*Create a polymorphic class Vehicle and create other derived classes Bus, Car and Bike from Vehicle.
With this program illustrate RTTI by the use of  dynamic_cast and typeid operators.*/
#include<iostream>
#include<typeinfo>
 
 
using namespace std;
 
 
class Vehicle
 
{
 
    public:
 
        virtual void show()
 
        {
 
 
        }
 
};
 
 
class Bus: public Vehicle
 
{
 
 
};
 
 
class Car: public Vehicle{};
 
 
class Bike: public Vehicle{};
 
 
int main()
 
{
 
    Vehicle *Vptr, veh;
 
    Bus *Bptr, bs;
 
    Car *Cptr, cr;
 
    Bike *Bpt, bk;
 
 
    Vptr = &bs;
 
    Bptr = dynamic_cast<Bus *>(Vptr);
 
    if(Bptr)
 
        cout<<"The Cast to derived pointer pbs is Sucessful"<<endl;
 
    else
 
        cout<<"The Cast to derived pointer pbs is Failed"<<endl;
 
 
    /******************************************************************************
 
    Here the cast from base class Vehicle pointer pveh to derived class Bus pointer
 
    pbs works well bcoz pveh is poining to derived class Bus' Object.
 
    *******************************************************************************/
Vptr= &cr;
    Cptr = dynamic_cast<Car *>(Vptr);
    if(Cptr)
        cout<<"Cast to derived pointer pcr is Sucessful"<<endl;
    else
        cout<<"Cast to derived pointer pcr is Failed"<<endl;
    Vptr = &bk;
    Bpt = dynamic_cast<Bike *>(Vptr);
    if(Bpt)
        cout<<"Cast to derived pointer pbk is Sucessful"<<endl;
    else
        cout<<"Cast to derived pointer pbk is Failed"<<endl;
    Vptr= &veh;
    Bptr = dynamic_cast<Bus *>(Vptr);
    if(Bptr)
        cout<<"Cast to derived pointer pbs is Sucessful"<<endl;
    else
        cout<<"Cast to derived pointer pbs is Failed"<<endl;
    /******************************************************************************
    Here the cast from base class Vehicle pointer pveh to derived class Bus pointer
    pbs works well bcoz pveh is poining to base class Vechile's Object.
    *******************************************************************************/
 
    Vptr = &veh;
    Cptr = dynamic_cast<Car *>(Vptr);
    if(Bptr)
        cout<<"Cast to derived pointer pcr is Sucessful"<<endl;
    else
        cout<<" Cast to derived pointer pcr is Failed"<<endl;
    Vptr = &veh;
    Bpt = dynamic_cast<Bike *>(Vptr);
    if(Bptr)
        cout<<"Cast to derived pointer pbk is Sucessful"<<endl;
    else
        cout<<"Cast to derived pointer pbk is Failed"<<endl;
    cout<<"\nType id of veh is: "<<typeid(veh).name()<<endl;
    cout<<"Type id of bs is: "<<typeid(bs).name()<<endl;
    cout<<"Type id of cr is: "<<typeid(cr).name()<<endl;
    Vptr = &bs;
    cout<<"\nIn pveh = &bs, the type id of pveh is: "<<typeid(*Vptr).name()<<endl;
    /**********************************************************************************
    The address of bs is assigned to pveh at runtime. So until runtime, the comiler see
    pveh as a type Vechile. But at runtime the address of bs is assigned to pveh and
    pveh becomes type of bs.
    ***********************************************************************************/
 
    Vptr = &cr;
    cout<<"In pveh = &cr, the type id of pveh : "<<typeid(*Vptr).name()<<endl;
    Vptr = &bk;
    cout<<"In pveh = &bk, the type id of pveh : "<<typeid(*Vptr).name()<<endl;
    return 0;
}