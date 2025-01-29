//fibonacci series

// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     //recursive
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci (n-1)+ fibonacci(n-2);
// }
// int main(){
//     int n;
//     cout<<"terms: ";
//     cin>>n;
//     cout<<"Fibonacci series up to "<<n<<" terms: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<fibonacci(i)<<" "<<endl;
//     }
//     return 0;
// }
// //iterative
// int fib(int n){
//     if(n==1 || n==2)return -1;
//     int a=0, b=0;
//     int ans;
//     for(int i=3;i<=n;i++){
//         ans=a+b;
//         a=b;
//         b=ans;
//     }
//     return ans;
// }

// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


// Another axample
// Input: N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].
 #include<iostream>
 using namespace std;
int climb(int n){
    if(n<2) return 1;
    
    return climb(n-1) +climb(n-2);
}
int main(){
    
}