           ///////   BUBBLE SORTING 

#include"iostream"
using namespace std;
void bubble(int arr[] , int s){
  int c=0;
    for(int i=0; i<s-1 ; i++){
     for(int j=0; j<s-1 ; j++){
         c++;
        if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
    }   
    }
    cout<<c<<"\n";
}
int main(){
   int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   bubble(arr , n);
   for(int i=0; i<n;i++){
      cout<<arr[i]<<" ";
   }
   // cout<<c;
}