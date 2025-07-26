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
      return 0;      
    }
    else if(s==1){
      cout<<"Array size minimum 2";
      return 0;
    }
    else if(s>10){
      cout<<"Array size not more than 10";
      return 0;
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



// In bubble sort compare the every node with its adjacent node

// Q.1 no of swaping in program
// Q.2 Is it stable or unstable
// Q.3 Is it place or not
// Q.4 Time complexity
// Q.5 If code is optimise then complexity is O(n)
// If not optimise then Complexity is O(n)^2


// If array having duplicate value then stable condition check
// If data is aseccending order then it is stable and in desecending then it is not stable
// If situation is this type [2,5,9,5,7] this it is stable condition


////  ######### InPlace and Not Inplace ####### ////

// If extra array is created then it is not inplace and if new array is not create then it is inplace
// Drawback of bubble sort
// It is use for small data not for large data 