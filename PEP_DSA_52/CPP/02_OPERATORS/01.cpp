OPERATORS:#include<iostream>
using  namespace std;

int main(){
    int a =5;
    int b = 10;;

    //Airtmetic opertors -> + - * / %
    // a+b;
    // a-b;
    // a*b;

    // cout<<a++<<endl;
    // cout<<++a<<endl;

    //cout<< a++ + ++a<<endl;

    //cout << ans;

    //----------------------------------------------

    //Assignment operators -> = += -= *= /= %=
    a+=b;
    cout <<a<<endl;

    //---------------------------------------------

    //Relational operators -> == != > >= < <=

    // bool ans = a < b;
    // cout << ans;

    //-----------------------------------------------

    // cond1   cond2   &&  ||
    // T       T       T   T
    // T       F       F   T 
    // F       T       F   T 
    // F       F       F   F 

    //Logical operators -> && || !(decision making)
    // bool ans = (a>10) || (b<20);
    // cout << ans << endl;

    //Design a C++ program to create a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, division, and modulus. The program should take two numbers and an operator as input from the user and display the result based on the selected operation.