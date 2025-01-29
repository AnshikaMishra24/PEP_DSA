//quick sort
//step 1 : choose the first ele to pivol ele 
//step 2: left to the pivot ele shoukd be less than pivot and right me more than pivot

#include<iostream>
using namespace std;

int partition(int arr[],int s,int e ){
    //find the pivot ->first ele
    int pivot=arr[s];
    //counting how many less than pivot
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIdx = s+count;

    //then we will handle the left n the right part in which all the ele should be less and greater respectively
    int i=s,j=e;
    while(i< pivotIdx && j > pivotIdx){
        while(arr[i]<pivot) i++;
        while(arr[i]>pivot) j--;

         swap(arr[i++],arr[j--]);
    }
    return pivotIdx;

}
void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e) return;

    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p-1,e);

}


int main()
{
    int arr[5]={2,1,7,3,5};
    
}