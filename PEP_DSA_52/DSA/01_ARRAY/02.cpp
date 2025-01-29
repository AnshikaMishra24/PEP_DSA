
    // Online Free C++ compiler to run C++ program online
    #include <iostream>
    #include<climits>
    using namespace std;
    int getMaxElement(int arr[], int size){
        int max = INT_MIN;
        for(int i = 0; i < size; i++){
            if(arr[i] > max){
                max = arr[i];
                }
}
return max;
}
int main(){
    int arr[6]={3,8,6,1,5,4};
    int size=6;
    cout<<"Max value is: "<<getMaxElement(arr,6)<<endl;
}