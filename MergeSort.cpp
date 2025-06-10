// // ######### MERGE SORT ##############
// 1 Mid Value 
// 2 Partition 
// 3 Divide and conquor
// 4 Merge
// 5 Time Complexity O(nlogn)
// in All Three cases 
// Space Complexity in more than quick sort O(n)
// It is not In place algorithm 
// It also use two pointer when each element is seperate 

#include<iostream>
using namespace std;

// void Merges(int arr[], int low, int mid, int high){
//  int b[high+1];
//  int i=low;
//  int j=mid+1;
//  int k=mid;


// }

// void MergeSort(int arr[], int low, int high){
// int mid;
// if(low<high){
//     mid = (low+high)/2;
//     MergeSort(arr, low ,mid);
//     MergeSort(arr, mid+1 ,high);
//     Merges(arr,low , mid , high);
// }

// }
void Merge(int arr[], int low, int mid, int high){

}
void MSort(int arr[], int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MSort(arr, low, mid);
        MSort(arr, mid+1, high);
        Merge(arr, low ,mid , high);
    }
}
int main(){
   int arr[]={9,3,4,1,5,6};
   int s=sizeof(arr)/sizeof(arr[0]);
   MSort(arr, 0, s-1);
   for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
   }
}
