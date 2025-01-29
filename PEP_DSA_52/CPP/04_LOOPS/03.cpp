#include<iostream>
using namespace std;
int main(){
//     switch(int a=2){
//         case 1:
//         cout<<"1";
//         break;
//         case 2:
//         cout<<"2"<<" "<<"Khatam"<<endl;
//         break;
//         default:
//         cout<<"ERROR"<<endl;
//         break;
//     }
// }
float num1,num2;
char oper;
cout<<"Enter operator: ";
cin>>oper;
cout<<"Enter two numbers: ";
cin>>num1>>num2;
switch(oper){
    case '+':
    cout<<num1+num2<<endl;
    break;

    case '-':
    cout<<num1-num2<<endl;
    break;

    case '*':
    cout<<num1*num2<<endl;
    break;

    case '/':
    cout<<num1/num2<<endl;
    break;

    default:
    cout<<"ERROR"<<endl;
}
}