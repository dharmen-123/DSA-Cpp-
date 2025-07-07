// ################# STACK ############################


#include<iostream>
using namespace std;
class Stackdata{
   public:
   int *arr;
   int n , top;
   Stackdata(int a){
    n=a;
    arr= new int[n];
    top=-1;
   }     
   void push(int v){
     if(top==n-1){
    cout<<"Stack is overflow\n";
     }
       top++;
       arr[top]=v;
    }
int Tops(){
    if(top==-1){
         cout<<"\nStact is underflow\n";
    }
    return 0;
}
void pop(){
     if(top==-1){
       cout<<"\nStact is underflow\n";
     }
      top--;
   }
};

int main(){
    int s;
    cout<<"Enter the size of arrray :";
    cin>>s;
    Stackdata S(s);
    S.push(10);
}