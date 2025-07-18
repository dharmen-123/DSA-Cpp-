//    ############### SET ##################

// It also a container 
// It also a ordered set and unordered set 
// the key i n set always br unique 
// It use hash function which manage the set
// It is sorted  in ascending order 
// It is use to show the data in sorted order 


// #include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// using namespace std;

// int main(){
//   set<int>s;
//   s.insert(20);
//   s.insert(75);
//   s.insert(86);
//   s.insert(64);
//   s.insert(24);
//   for(auto a:s){
//     cout<<a<<"\n";
// }
// //  s.clear();
// // s.erase(683);
// auto p=s.find(43);
// if(p!=s.end()){
//     cout<<"found\n";
// }
// else{
//     cout<<"Not found\n";
// }
//   for(auto a:s){
//     cout<<a<<"\n";
// }
// }


 ////// ############# SEGMENTATION FALULT ########################### 
 ////// ############# SEGMENTATION FALULT ########################### 

// what is segmentation fault in cpp 
// When we delete a data which is not exist in set 
// find and erase are not give the message in return it is segmentation fault 
// due to handle  this  fault use pointer 
// find is iterater it return the address thats why we auto is used
// auto p =s.find(data);


// #include<iostream>
// #include<bits/stdc++.h>
// #include<unordered_set>
// using namespace std;

// int main(){
//    unordered_set<string>s1{"pen","pencil","eraser","alphabet","watch"};
//     //   set<string>s1{"pen","pencil","eraser","alphabet","watch"};      
//    for(auto a:s1){
//      cout<<a<<"\n";
//    }
// }




// erase() delete all same data
// when erase is used with find it delete the first value from data 
// COMPLEX DATA TYPE is pair and tuple  IMP IMP 


//    ######## Multiset #########
// multiset is used to allow the duplicacy and maintain the order 

// #include<iostream>
// #include<bits/stdc++.h>
// #include<set>
// using namespace std;

// int main(){
//   unordered_multiset<int>s;
//   s.insert(20);
//   s.insert(75);
//   s.insert(64);
//   s.insert(100);
//   s.insert(24);
//   s.insert(75);
//   for(auto a:s){
//     cout<<a<<"\n";
// }
// //  s.clear();
// // s.erase(683);
// auto p=s.find(43);
// if(p!=s.end()){
//     cout<<"found\n";
// }
// else{
//     cout<<"Not found\n";
// }
//   for(auto a:s){
//     cout<<a<<"\n";
// }
// }