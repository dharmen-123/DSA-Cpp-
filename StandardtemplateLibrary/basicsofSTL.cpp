// #include"iostream"
// using namespace std;
// int main(){
//    cout<<"Hello"; 
// }

// Ambiguity
// Integer and Float type accept float value or int value both that time ambiguity is create 

#include<iostream>
using namespace std;
template<class mytype>
mytype Sum(mytype a){
    
    return a+10;

}
int main(){
    cout<<Sum(10);
}