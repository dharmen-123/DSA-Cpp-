#include"iostream"
using namespace std;
void bubble(int arr[], int s){
int temp,c=0;
  for(int i=0;i<s;i++){
    for(int j=0;j<s-i-1;j++){
      c++;
        if(arr[j]>arr[j+1]){
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
        }
    }
  }
  cout<<"Loop is runing "<<c<<" Times \n";
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
    bubble(arr, s);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}