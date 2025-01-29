// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[],int n){
    
//     for(int i=0;i<n-1;i++){
//         bool hasSwapped=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 bool hasSwapped=true;
//             }
//         }
//         if(hasSwapped==false) break;
//     }
// }
// int main(){
//     int arr[6]={4,2,6,8,7,3};

//     bubbleSort(arr,6);

//     for(int i=0;i<6;i++){
//         cout<< arr[i] <<" ";
//     }
// }

// #include<iostream>
// using namespace std;

// void mergeArrays(int arr1[], int arr2[], int n, int m, int result[]) {
//     int i = 0, j = 0, k = 0;

//     // Merge both arrays into result[]
//     while(i < n && j < m) {
//         if(arr1[i] < arr2[j]) {
//             result[k++] = arr1[i++];
//         } else {
//             result[k++] = arr2[j++];
//         }
//     }

//     // If there are remaining elements in arr1
//     while(i < n) {
//         result[k++] = arr1[i++];
//     }

//     // If there are remaining elements in arr2
//     while(j < m) {
//         result[k++] = arr2[j++];
//     }
// }

// int main() {
//     int arr1[4] = {1, 2, 3, 3};
//     int arr2[6] = {3, 4, 5, 5, 7, 9};
//     int result[10]; // To store the merged result of both arrays

//     mergeArrays(arr1, arr2, 4, 6, result);

//     // Print the merged array
//     for(int i = 0; i < 10; i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void mergeArrays(int arr1[], int arr2[], int n, int m, int ans[]) {
//     merge(arr1, arr1 + n, arr2, arr2 + m, ans);
// }

// int main() {
//     int arr1[4] = {1, 2, 3, 3};
//     int arr2[6] = {3, 4, 5, 5, 7, 9};
//     int ans[10];

//     mergeArrays(arr1, arr2, 4, 6, ans);
//     for(int i = 0; i < 10; i++) {
//         cout << ans[i] << " ";
//     }
// }
