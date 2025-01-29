#include<iostream>
using namespace std;

int main(){
    int a1=5;
    int a2=10;

    cout<<&a1<<endl;
    cout<<&a2<<endl;
     int *ptr1;//pointer declaration 
     cout<< *ptr1 <<endl;//pointer ko dereferencing (jis taraf pointer point krrha h jo address pr value h wo dega)
     
     int *ptr1=&a1;
     cout<<ptr1<<endl;//address stored and will give address
     
}//pointer is a apecial type of variable because it stores address of another variable
