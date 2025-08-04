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


// #include<iostream>
// using namespace std;

// void Merge(int arr[], int low, int mid, int high){
//   int b[high+1];
//   int i=low;
//   int j=mid+1;
//   int k=low;
//   while(i<=mid && j<=high){
//     if(arr[i]<arr[j]){
//      b[k]=arr[i];
//      i++;
//     }
//     else{
//      b[k]=arr[j];
//      j++;
//     }
//     k++;
//   }
// while(i<=mid){
//     b[k]=arr[i];
//     i++;
//     k++;
// }
// while(j<=high){
//     b[k]=arr[j];
//     j++;
//     k++;
// }
// for(int i=low;i<=high;i++){
//     arr[i]=b[i];
// }
// }
// void MSort(int arr[], int low, int high){
//     int mid;
//     if(low<high){
//         mid=(low+high)/2;
//         MSort(arr, low, mid);
//         MSort(arr, mid+1, high);
//         Merge(arr, low ,mid , high);
//     }
// }

// int main(){
//    int arr[]={5,4,3,2,1,7,6,2,6,9};
//    int s=sizeof(arr)/sizeof(arr[0]);
//    MSort(arr, 0, s-1);
//    for(int i=0;i<s;i++){
//     cout<<arr[i]<<" ";
//    }
// }


// /// //  #################### Q.46 #############################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string multiply(string num1, string num2) {
//      int a=0,b=0;
//     for(int i=0;i<num1.length();i++){
//           a=a*10+(num1[i]-'0');      
//     }
//     for(int i=0;i<num2.length();i++){
//           b=b*10+(num2[i]-'0');
//     }
//        string s=to_string(a*b);
//         return s;
// }
// int main(){
//     string num1="123";
//     string num2="456";
//     cout<<multiply(num1,num2);

// }


