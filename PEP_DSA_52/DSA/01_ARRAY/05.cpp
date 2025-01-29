// You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

// Example 1:
// Input:
// 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output:
// 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation:
// All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
#include<iostream>
#include<vector>
using namespace std;
void moveZeroesToend(int arr){
    int[nonZero]=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[nonZero]=arr[i];
            nonZero++;
        }
    }
    for(int i=nonZero;i<n;i++){
        arr[i]=0;
    }
}
int main(){
    int arr[i];
    for(int i=0;i<arr.size();i++){

    }
}

//APPROACH= i++,j++ ifj==0;j++ then swap(i,j) sorted

//Question 2

// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
// [1,2,4,7,7,5]
// Output:
// Second Smallest : 2
// Second Largest : 5
// Explanation:
// The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
#include<iostream>
using namespace std;
void SecondSmallestandLargest(int arr){
    for(int i=0;i<arr.size();i++){
        if(arr.size()<2){
            cout<<"-1";
        }
    }
    int firstSmallest=
}

#include<iostream>
using namespace std;

int main(){
    // int arr[2][3] = {1,2,3,4,5,6};

    // int arr[3][4] = {{1,2,3,4},
    //                 {5,6,7,8},
    //                 {9,10,11,12}}

    int arr[3][4];

//taking input row wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // taking input column wise
    // for (int j = 0; j < 4; j++) { // Outer loop iterates over columns
    // for (int i = 0; i < 3; i++) { // Inner loop iterates over rows
    //     cin >> arr[i][j];
    // }


    //print
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}