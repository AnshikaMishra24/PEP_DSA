//merge sort
#include<iostream>
using namespace std;

int mergeSort(int arr[],int s ,int e){
    int mid=(s+e)/2;
    sort(arr,s,mid);
    sort(arr,mid+1,e);
}

int main()
{

}