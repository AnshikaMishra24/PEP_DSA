//function overloading 
#include<iostream>
using namespace std;

void print(){
    cout<<"1"<<endl;

}
void print(string name){
    cout<<"2"<<endl;

}
// int print(){
//     return 3;
// }
// int main()
// {
//     print("john");
// }

int print (double d1){
    return 3;
}
int print (double d1, int a){
    return 4;
}
int main()
{
    print();
}


