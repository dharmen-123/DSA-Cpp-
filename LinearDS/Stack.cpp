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
int tops(){
    if(top==-1){
         cout<<"\nStact is underflow\n";
    }
    return arr[top];
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
    S.push(5);
    S.push(18);
    cout<<S.tops()<<endl;
    S.pop();
    S.pop();
    // S.push(24);
    cout<<S.tops()<<endl;

}