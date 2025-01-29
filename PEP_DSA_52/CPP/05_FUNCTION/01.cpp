#include<iostream>
using namespace std;
//  void hello(string name,int age){//kuch return nhi krrha h
//     cout<<"HELLO my name is "<<name <<" and my age is: "<<age<<endl;
//  }
//int main(){
//     //we will call the function
//     hello("ann",20);
//   }
// void test1(){
//     cout<<"Statement1"<<endl;
// }

// void test2(){
//     test1();
//     cout<<"Statement2"<<endl;
// }
// int main(){
//     test2();
// }

int add(int num1, int num2){
    int ans= num1+num2;
    
    return ans;
}
int main(){
    cout<<add(2,4);
}

