// ################# STACK ############################
// Linear data Structure 
// LIFO last in frist out
// |    |5
// |    |4   n-1  6-1
// |    |3
// |    |2
// |    |1
// |    |0
// top=-1+1
// Insrtion and deletion at one side
// push
// pop 
// top
// empty


// #include<iostream>
// using namespace std;
// class Stackdata{
//    public:
//    int *arr;
//    int n , top;
//    Stackdata(int a){
//     n=a;
//     arr= new int[n];
//     top=-1;
//    }     
//    void push(int v){
//      if(top==n-1){
//     cout<<"Stack is overflow\n";
//      }
//        top++;
//        arr[top]=v;
//     }
// int tops(){
//     if(top==-1){
//          cout<<"\nStact is underflow\n";
//     }
//     return arr[top];
// }
// void pop(){
//      if(top==-1){
//        cout<<"\nStact is underflow\n";
//      }
//       top--;
//    }
// };
// int main(){
//     int s;
//     cout<<"Enter the size of arrray :";
//     cin>>s;
//     Stackdata S(s);
//     S.push(10);
//     S.push(5);
//     S.push(18);
//     cout<<S.tops()<<endl;
//     S.pop();
//     S.pop();
//     S.push(24);
//     cout<<S.tops()<<endl;
// }


#include<iostream>
using namespace std;
class Stackdata{
 public:
 int *arr;
 int n,top;

 Stackdata(int v){
    n=v;
    arr = new int[n];
    top =-1;
 }
void push(int a){
    if(top==n-1){
       cout<<"Stack is overflow :\n";
    }
}


};


int main(){

}

//////  ################# Stack STL inbuild Template #########################

// #include<iostream>
// using namespace std;
// #include<stack>

// int main(){
   
//   stack<int>st;
//   st.push(10);   
//   st.push(7);   
//   st.push(4);
//   // cout<<st.top()<<endl;   
//   st.pop();
//   st.push(28);
//  while (!st.empty())
//  {
//   cout<<st.top()<<endl;
//   st.pop();
//  }
//   // cout<<st.top()<<endl;
// }

////// Write a program to find out the minimum value in the stack ############# 

// #include<iostream>
// using namespace std;
// #include<stack>
// int main(){
//   stack<int>st;
//  st.push(3);
//  st.push(4);
//  st.push(5);
//  st.push(6);
//  st.push(6);
//  st.push(2);
//   int min=st.top();
//  while(!st.empty()){
//   if(min>st.top()){
//     min=st.top();
//   }   
//      st.pop();

//  }
//  cout<<min;
// }

////// ############## Reverse the String Using stack ################## 

// #include<iostream>
// using namespace std;
// #include<stack>
// #include<string>
// int main(){
//  string str="SKY IS BLUE";
//  string s1;
//  cout<<"str="<<str.size()<<"\n";
//  stack<string>s;

//   for(int i=0;i<str.size();i++){
//     if(str[i]!=' '){
//         s1+=str[i];
//           if(i==str.size()-1){
//           s.push(s1);
//         }
//     }
//     else{
//        s.push(s1);
//        s1.erase();
//     }
//   }
//   cout<<"stack="<<s.size()<<"\n";
//    while (!s.empty())
//  {
//     cout<<s.top()<<" ";
//     s.pop();
// }
// }