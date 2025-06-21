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
template<class mytype>
void Sum(mytype x1, mytype x2){

     cout<<"Result :"<<x1+x2;
}
int main(){
   Sum(9,3);

}