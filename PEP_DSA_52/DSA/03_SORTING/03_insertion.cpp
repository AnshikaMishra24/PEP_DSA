#include<iostream>
using namespace std;


void insertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=1;

        while(j>0 && arr[j-1]>arr[j]){
            //swap (arr[j-1],arr[j]);
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){

}