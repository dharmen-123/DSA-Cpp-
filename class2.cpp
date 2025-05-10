  //// Call by value

// #include"iostream"
// using namespace std;
// void show(int a , int b){
//     cout<<a+b;
// }

// int main(){
//     int x,y;
//     cout<<"Enter two number: ";
//     cin>>x>>y;
//     show(x,y);
// }

  //// Call By Reference
  
// #include"iostream"
// using namespace std;
// void show(int &a , int &b){
//     a=a+10;
//     b=b+20;
//     cout<<a+b<<"\n";
// }

// int main(){
//     int x,y;
//     cout<<"Enter two number: ";
//     cin>>x>>y;
//     show(x,y);
//     cout<<"x="<<x<<"\n"<<"y="<<y;
// }

// array has inbuild pointer which stay  at zero indexing
// aaray always hold its address and it work on address
// array default behaviour is call by reference


#include<iostream> 
using namespace std;
void show(int a[])
{  
    for(int i=0; i<5; i++)

{ 
  if(a[i]%2==0){  
     a[i]+=2;
  }
//  cout<<a[i]<<"\n";
}    
}
int main()
{
    int arr[5]={20,1,4,3,5};
    show(arr);
    cout<<"\n output\n";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<"\n";
    }
}