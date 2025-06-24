// ######## STRING TEMPLATE CLASS ############

// String is a class not data type
// Algo is always is apply in class


// char is terminate after space 
// char take 1 byte space 
// string by default take 32 byte 

// getline function is used to take strig as a input with space 
// It take two parameter first in object and second is variable 


// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//     string a;
//     cout<<"Enter your name :\n";
//     getline(cin,a);
//     cout<<"Name is :"<<a;
     
// }

// #####################

#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
int main(){
  
    string a(5,'hello');
    cout<<a;

    string j="17429475";
    sort(j.begin(),j.end(),greater<int>());
    cout<<j;
   
}

// In sort function there are two pointer begin() and end()
// begin take the starting point and end take the last point 
// Sort function take three parameter 
// starting point , end point , operation perform 
