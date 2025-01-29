#include<iostream>
using namespace std;

class Room(){
    public:
    int height;
    int width;

    Room(){
        cout<<"This is a default constructor"<<endl;
    }
    
    Room(int h){
        cout<<"This is a default constructor"<<endl;
    }
    Room(int height,int width){
        this->height=height;//this is used whne ambiguity arrives
        this->width=width;
    }

    Room(Room &obj){
        this->height=obj.height;//copy constructor==which copies the values
        this->width=obj.width;
    }

    ~Room(){
        //destructure which destroys uske kaam hone k baad
        cout<<"This is a destructor"<<endl;
    }
};


int main(){
    Room r1(3,5);
    //cout<<r1.height<<endl;
    Room r2(r1);
    cout<<r2.height<<endl;


}

// #include <iostream>
// using namespace std;

// class Room {
// private:
//     int length;
//     int width;

// public:
//     // Constructor to initialize the values
//     Room(int l, int w) {
//         length = l;
//         width = w;
//     }

//     // Function to calculate area of the room
//     int area() {
//         return length * width;
//     }
// };

// int main() {
//     // Create a Room object with given dimensions
//     Room r1(3, 5);
    
//     // Output the area of the room
//     cout << "Area of the room: " << r1.area() << endl;

//     return 0;
// }
