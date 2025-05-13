#include"iostream"
using namespace std;
void bubble(int arr[], int s){
int temp;
  for(int i=0;i<s;i++){
    for(int j=0;j<s-i-1;j++){
        if(arr[j]>arr[j+1]){
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
        }
    }
  }
}

int main(){
    int s;
    int arr[s];
    cout<<"Enter the array size \n";
    cin>>s;
    cout<<"Enter "<<s<<" values";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    bubble(arr, s);
    for(int i=0;i<s;i++){
        cout<<arr[i];
    }
}