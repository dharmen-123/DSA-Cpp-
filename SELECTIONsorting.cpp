#include<iostream>
using namespace std;
int main(){
     
    int arr[]={3,14,2,5,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    
    }
    
    for(int i=0;i<s;i++){
        int min=i;
     for(int j=i+1;j<s;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
     }
     if(min!=i){
        int sw=arr[i];
        arr[i]=arr[min];
        arr[min]=sw;
     }
    }
    cout<<"\nAfter Sorting\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}