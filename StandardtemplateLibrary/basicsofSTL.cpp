// #include"iostream"
// using namespace std;
// int main(){
//    cout<<"Hello"; 
// }

// Ambiguity
// Integer and Float type accept float value or int value both that time ambiguity is create 
 
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

#include<iostream>
using namespace std;
template<class mytype1 ,class mytype2>
mytype1 Sum(mytype1 x1, mytype2 x2){

//   cout<<"Result :"<<x1+x2;
     return x1+x2;

}
int main(){

   cout<<Sum(9.3,3);

}