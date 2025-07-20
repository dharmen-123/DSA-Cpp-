//// ###### INSERTION SORT ########## ////
// It is Online Algorithm //

#include"iostream"
using namespace std;

void Insertion(int arr[], int s){
    int count=0;
    for(int i=1;i<s;i++){
      int min=i;
      while(min>0 && arr[min]<arr[min-1]){
        count++;
         int tem=arr[min-1];
         arr[min-1]=arr[min];
         arr[min]=tem;
         min--;
        }
    }
    cout<<"No of hits "<<count;
}

int main(){
    int s;
    cout<<"Enter the array size \n";
    cin>>s;
    int arr[s];
    cout<<"Enter "<<s<<"Values \n";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
   Insertion(arr, s);
    cout<<"\n after Sorting \n";
    for(int i=0;i<s;i++){
     cout<<arr[i]<<" ";
   }
  }


// Insertion Sort is Stable sorting algorithm 

//  It is also Inplace 
//---- Time Complexity------
// Best case O(n)
// Average Case O(n^2)
// Worst Case O(n^2)
// Space Complexity is O(n) 

// Here while loop is used instead of if because if check only once at a time
// Why minimum value is greater than zero index
// because it start from one index
