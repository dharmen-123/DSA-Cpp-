// #include<iostream>
// using namespace std;
// int main(){
     
//     int arr[]={3,14,2,5,7};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
    
//     }
    
//     for(int i=0;i<s;i++){
//         int min=i;
//      for(int j=i+1;j<s;j++){
//         if(arr[min]>arr[j]){
//             min=j;
//         }
//      }
//      if(min!=i){
//         int sw=arr[i];
//         arr[i]=arr[min];
//         arr[min]=sw;
//      }
//     }
//     cout<<"\nAfter Sorting\n";
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

// ##############################################################

#include<iostream>
using namespace std;

void Selection(int arr[],int s){
    int c=0;
     for(int i=0;i<s;i++){
        int min=i;
        for (int j=i+1; j <s; j++)
        {
               c++;
              if(arr[j]<arr[min]){
                min=j;
              }
        }
        if(min!=i){
            int swp=arr[i];
            arr[i]=arr[min];
            arr[min]=swp;
        }
     }   
     cout<<"\nHits :"<<c<<"\n";
}
int main(){
    int s;
    cout<<"Enter Size of array\n";
    cin>>s;
    int arr[s];
    cout<<"Enter the values\n";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    Selection(arr,s);
    cout<<"AFTER SORTING\n";
    for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
    }
}

// // SELECTION SORT  Conditions
// Time Complexity   O(n)^2
// Space Complexity --> O(1)
// Stable --> It is not Stable Sort algorithm
// Inplace --> It is Inplace 
// Approach --> Subtract and Conquer Approach
// Optimise --> Not optimise

// It is an odd one example because it time complexity in every case O(n)^2