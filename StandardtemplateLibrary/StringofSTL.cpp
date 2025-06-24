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
// string has the resize function it shrik the size of string
// resize function does not expand the size 

// size function give the actual size of data 
// sizeof() function it give the byte of data 

// find() function return the indexing of value 

// example : s="Bhopal";
//     s.find("op");
// j="345345"
// back() function It return the last value of string 
// s.back()
// front() function It return the first value of string 
// s.front()
// + Operator concatenate the two string 

// append() function it add the next data in first 
// j.append(s) 
