           ///////   BUBBLE SORTING 

           #include"iostream"
using namespace std;
void bubble(int arr[] , int s){
 
    for(int i=0; i<s ; i++){
     for(int j=0; j<s-1 ; j++){
        if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
    }   
    }
}
int main(){
   int arr[]={7,3,9,6,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   bubble(arr , n);
   for(int i=0; i<n;i++){
      cout<<arr[i]<<" ";
   }
}