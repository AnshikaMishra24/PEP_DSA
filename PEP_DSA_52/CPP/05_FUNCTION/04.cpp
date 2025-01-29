//question
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
 //2
 for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }

//3
for (int i = 1; i <= n; i++) {
        // Inner loop for printing spaces before stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // Print spaces
        }

        // Inner loop for printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";  // Print stars
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}