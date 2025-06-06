////  QUICK SORTING 
// It is mostly useful sorting algorithm 
// It follow Divide and conquer approach 
// It use pivot element 
// It divide array in two part may be or not
// It also use Recurssion 
//It is not mandatory to select the pivot element is always first element  
// It use two pointer
 

////   LOGIC of Quick Sort 

//choose first element as a pivot 
// then after pivot element first element as P and last element is Q
// if P > Pivot then
//    stop
// else
//    P++
// and
// if Q < Pivot then 
//    stop
// else
//    Q--


// If two pointer are not cross each other then swap is done between two pointer 
// and  if two pointer are cross each other then swap is done between 
// last pointer Q  and pivot element and mid value is obtained

// Time Complexity of Quick Sort 
// Best case O(nlogn)
// Average case O(logn)
// Worst case O(nlogn)

// #include<iostream>
// using namespace std;
// int part(int arr[], int low, int high){

//   int pvt=arr[low];
//   int i=low+1;
//   int j=high;
//   int temp;

// do{
//  while(arr[i]<pvt){
//    i++;
//  }
// while(arr[j]>pvt){
//     j--;
//  }
//  if(i<j){
//     temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//  }
// }while (i<j);
//  temp=arr[low];
//  arr[low]=arr[j];
//  arr[j]=temp;
  
//  return j;
// }
// void Quicksort(int arr[], int low, int high){
  
//  int pivot;
//   if(low<high){
//     pivot=part(arr,low,high);
//     Quicksort(arr , low , pivot-1);
//     Quicksort(arr , pivot+1 ,high);

//   }
// }
// int main(){
//     int arr[]={6,5,4,3,2,1};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < s; i++)
//     {
//        cout<<arr[i]<<" ";
//     }
//     Quicksort(arr, 0 ,s-1);
//     cout<<"After sorting\n";
//     for (int i = 0; i < s; i++)
//     {
//        cout<<arr[i]<<" ";
//     }
// }

// ##################################### PRACTICE ######################

#include<iostream>
using namespace std;
int part(int arr[], int low , int high){
   int pvt=arr[low];
   int i=low+1;
   int j=high;
   int swp;
  do
   {
   while(arr[i]<pvt){
     i++;
   } 
   while(arr[j]>pvt){
     j--;
   } 
   if(i<j){
    swp=arr[i];
    arr[i]=arr[j];
    arr[j]=arr[i];    
   }
   } while (i<j);
    swp=arr[j];
    arr[j]=arr[low];
    arr[low]=swp;
   return j;
  }
void QuickSort(int arr[], int low, int high){
int pivot;
if(low<high){
  pivot=part(arr,low, high);
  QuickSort(arr, low , pivot-1);
  QuickSort(arr, pivot+1 , high);
}

}

int main(){
   int s;
   cout<<"Enter the size of array :";
   cin>>s;
   int arr[s];
   cout<<"Enter the "<<s<<"Values of Array:\n";
   for(int i=0;i<s;i++){
    cin>>arr[i];
   }
   QuickSort(arr,0,s-1);
  for(int i=0;i<s;i++){
    cout<<arr[i];
   }

}

