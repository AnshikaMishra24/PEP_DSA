#include<iostream>
using namespace std;

class Car{//class k andr pvt(not accesible)
    //Attributes ->data members ->var
    //contrusctor is a spl type of method jo class wala same name rehta h 
    //koi return type nhi hota 
    //ye call hota h jab object bnate h
    public:
    string color;
    int speed;
    int price;

    Car(){
        cout<<"This is from constructor method"<<endl;
        //iska purpose h values ko initialize krne k liye
        //defULt constructure is always called when object is created
        //you can havve multiple constructor
    }

    Car(s)
    //Behaviours ->member function ->func
    void boostUp(){

    }
};

int main()
{
    Car car1;//entity
    car1.color="Black";
    car1.speed=100;

    cout<<car1.speed<<endl;

    Car car2;//entity
    car1.color="Red";
    car1.speed=300;

    cout<<car1.speed<<endl;
}
