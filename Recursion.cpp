// ######## RECURSION ######## 
// It is define as the function calling it self 
// It has two parameter 1 base condition 2 recursion relationship

// every time recursion program will be create parameterized function   

// Type of recursion 
// Head Recursion and Tail Recursion 
//  If function call before print in recursion it is called Tail recursion
//  If function call After print in recursion it is called Head recursion

// #include<iostream>
// using namespace std;
// void msg(int a){

//     if(a==0){
//         return;
//     }
//     //// msg(a-1);   Tail Recursion
//     cout<<a<<"\n";
//     msg(a-1);      // Head Recursion
    
// }
// int main(){
//    int a;
//    cout<<"Enter any number : ";
//    cin>>a;
//    msg(a);
// }


// ########## factorial  program 

// #include<iostream>
// using namespace std;
// int fact(int a){
//     if(a==1){
//         return 1;
//     }
//  int ans = a*fact(a-1);
//  return ans;
// }

// int main(){
//    int a;
//    cout<<"Enter any number: ";
//    cin>>a;
//    cout<<fact(a);
// }

// WAP for power for using recurssion

// WAP for print table using recursion

#include<iostream>
using namespace std;
void Table(int a, int n){

    if(n>10){
        return;
    }
    int k;
    k=a*n;
    cout<<k<<"\t";
    Table(a,n+1);
}
int main(){
   int n;
   cout<<"Enter any number :";
   cin>>n;
   Table(n,1);
   
}