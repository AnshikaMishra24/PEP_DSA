//example 1
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<=6;j++){
            cout<<i<<"->"<<j<<" || ";
        }
        cout<<endl;
    }
}
//example 2
int week = 3;
int days= 7;
for (int i=1;i<=week;i++){
    cout<<"Week : "<<i<<endl;
    for(int j=1;j<=days;j++){
        if(j%2!=0){
            continue;
        }
        cout<<" Days : "<<j<<endl;
    }
}