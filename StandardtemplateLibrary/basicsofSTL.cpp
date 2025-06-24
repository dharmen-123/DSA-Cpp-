// #include"iostream"
// using namespace std;
// int main(){
//    cout<<"Hello"; 
// }

// Ambiguity
// Integer and Float type accept float value or int value both that time ambiguity is create 
//   ######### STL (Standard Template Library) ########
//  #### Components of STL ########
// 1. ITERATOR 
// 2. Template 
// 3. Algorithm 

//#################  Functional Template ########################

// #include<iostream>
// using namespace std;
// template<class mytype>
// mytype Increment(mytype a){
    
//     return a+10;

// }
// int main(){
//     cout<<Increment(10);
// }

//#################  Two parameter template  ########################

// #include"iostream"
// using namespace std;
// template<class mytype1 ,class mytype2>
// mytype1 Sum(mytype1 x1, mytype2 x2){

// //   cout<<"Result :"<<x1+x2;
//      return x1+x2;

// }
// int main(){

//    cout<<Sum(9.3,3);

// }


// #include"iostream"
// using namespace std;
// template<class obj>
// class job{

//  public:
//  obj v;
//  job(obj val){
//     v=val;
//     cout<<"Value ="<<v;
//  }   
// };
// int main(){

//    job<float>j(20);
// }

#include"iostream"
using namespace std;
template<class obj1,class obj2>
class job{
 public:
 obj1 v1;
 obj2 v2;

 job(obj1 val1,obj2 val2){
    v1=val1;
    v2=val2;
    cout<<"Value ="<<v1+v2;
 }   
};
int main(){
   job<int, float>j(20,10.3);
}

// #include<iostream>
// using namespace std;
// template<class mytype>
// void Show(mytype a){
//    cout<<"This is number :"<<a;
// }
// int main(){
// Show(10);
// }

