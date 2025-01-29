// #include<iostream>
// using namespace std;

// int main(){

//     int getLength(char arr[]){
//         int count =0;
//         for(int i=0;arr[i]!='\0';i++){
//             count++;
//         }
//         return count;
//     }
    // char str[]={'H','e','l','l','o'};
    // char str ="Hello";

    // char str[100];
    // cout<<"Enter Something : ";
    // cin>>str;
    //cin.getline(str,100);
    //cout<<str<<endl;


    // string str;
    // cout<<"Enter Something: "
    // cin>>str;
    // getline(cin,str);
    // cout<<str<<endl;

    //Example 1
//     char str[]={'H','e','l','l','o'};


// }

//palindrome for case sensitive special charac 

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0, right = str.size() - 1;

    while (left < right) {
        // Check if characters are the same (case-sensitive, special chars included)
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}