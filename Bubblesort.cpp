//            ///////   BUBBLE SORTING 

// #include"iostream"
// using namespace std;
// void bubble(int arr[] , int s){
//   int c=0;
//     for(int i=0; i<s-1 ; i++){
//      for(int j=0; j<s-1 ; j++){
//          c++;
//         if(arr[j]>arr[j+1]){
//         int temp=arr[j];
//         arr[j]=arr[j+1];
//         arr[j+1]=temp;
//         }
//     }   
//     }
//     cout<<c<<"\n";
// }
// int main(){
//    int arr[]={1,2,3,4,5};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    bubble(arr , n);
//    for(int i=0; i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    // cout<<c;
// }

// ////////  Condition applying bubble sort
#include"iostream"
using namespace std;
void bubble(int arr[], int s){
int temp,c=0;
bool d;
  for(int i=0;i<s;i++){
    d=false;
    for(int j=0;j<s-i-1;j++){
        c++;
        if(arr[j]>arr[j+1]){
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
        d=true;
        }
    }
    if(d==false){
      break;
    }
  }
  cout<<"Loop is runing "<<c<<" Times \n";
}
int main(){
    int s;
    cout<<"Enter the array size \n";
    cin>>s;
    if(s<=0){
      cout<<"INVALID";
    }
    else if(s==1){
      cout<<"Array size minimum 2";
      return;
    }
    else if(s>10){
      cout<<"Array size not more than 10";
      return;
    }
    else{
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
}