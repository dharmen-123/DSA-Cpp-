// Vector 
// Vector is a dynamic array , It also a teplate class

//when static array is define by default value of aaray is 0 when only size is given 
// SYNTAX 
//  vector<data type>name(size, default value);

// #include<iostream>
// using namespace std;
// #include<vector>

// int main(){

//      vector<int>p;
//      cout<<p.size()<<endl;

//    ////  define size of array dynamically 
//      vector<int>v(5);
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<"\t";   
//      }
//      cout<<"\n";
//   ////  default value set by parameter 
//      vector<int>s(3,5);
//      for(int i=0;i<s.size();i++){
//         cout<<s[i]<<"\t";   
//      }
// }

// Static array size cannot be change after declaring 
// After size the values is goes in heap memory 
// Example :
//        vector<int>v(4,5,6);
//        v[5]=100; size ov v is 3

////# push_back() function it is use to insert the value in vector array at last position last

#include<iostream>
using namespace std;
#include<vector>
int main(){

 vector<int>p(2,6);
 p.push_back(5);
 p.push_back(8);
 cout<<p[0]<<endl;
 cout<<p[1]<<endl;
 cout<<p.size()<<endl;
 p.resize(3);
 cout<<"After resize :"<<p.size()<<endl;
 p.clear();
 cout<<"After clear :"<<p.size()<<endl;

}

// push_back - It insert the value from the last on array 
// clear - It make the array empty but the object is present
// resize -It shrink the array
// pop_back- It delete the value from the last of array