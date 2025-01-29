#include<iostream>
using namespace std;

void test(int num){//pass by value
    ++num;
    cout<<"num value in test : "<<num<<endl;
}

int main()
{
    int num;
    cin>>num;
    test(num);
    cout<<num<<endl;
    cout<<"Final output : "<<num<<endl;
}



void test(int &num){//pass by reference
    ++num;
    cout<<"num value in test : "<<num<<endl;
}

int main()
{
    int num;
    cin>>num;
    test(num);
    cout<<num<<endl;
    cout<<"Final output: "<<num<<endl;
}