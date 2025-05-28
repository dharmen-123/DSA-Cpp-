//// ###### INSERTION SORT ########## ////
// It is Online Algorithm //

#include"iostream"
using namespace std;
void Insertion(int arr[], int s){
    for(int i=1;i<s;i++){
      int min=i;
      while(min>0 && arr[min]<arr[min-1]){
         int tem=arr[min-1];
         arr[min-1]=arr[min];
         arr[min]=tem;
         min--;
        }
    }
}
int main(){
    int arr[]={8,9,6,5,1};
    int s= sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<s;i++){
     cout<<arr[i]<<" ";
   }
    Insertion(arr, s);
     cout<<"\nafter\n";
  for(int i=0;i<s;i++){
     cout<<arr[i]<<" ";
   }
  }


// Why minimum value is greater than zero index
// because it start from one index