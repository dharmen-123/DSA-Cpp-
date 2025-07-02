// ## Pair and tuple 
// pair is used to store two dimentional value and we can access the first indexing
//  by using first keyword and the second indexing is access by second keyword 
//  we can store the value in pair by using make underscore pair function
 
// pair can store only two parameter with any combination of data type 
// #include<iostream>
// using namespace std;

// int main(){
//  pair<string ,int>p;
//  p.first="Dharmendra";
//  p.second=8.5;
//  cout<<"Name :"<<p.first<<endl;
//  cout<<"Age:"<<p.second<<endl;
 
// }

//////////////  ######################################

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<string>
// int main(){
//     vector<pair<string,int>>v;
//     int s;
//     string name;
//     float cgpa;
//     cout<<"How many Entries ";
//     cin>>s;
//     for(int i=0;i<s;i++){
//         cout<<"Enter the name :";
//         cin>>name;
//         cout<<"Enter the CGPA :";
//         cin>>cgpa;
//       v.push_back(make_pair(name,cgpa));
      
//     }
//     cout<<"Data :\n";
//     for(int i=0;i<s;i++){
//         cout<<v[i].first<<"="<<v[i].second<<"\n";
//     }
// }

// get is the comparator operator 

///// ################### TUPLE in Vector #############################
///// ################### TUPLE in Vector #############################
/////  Tuple can store multiple column more than two 
/////  It store the value by get<indexing>  comparator operator
/////  Tuple is not container it only a format for storing the multiple coloumn 

#include<iostream>
using namespace std;
#include<vector>
#include<tuple>
int main(){
    tuple<int,string,int>student;
    int roll, year;
    string name;
    cout<<"Enter the Roll no: ";
    cin>>get<0>(student);   
    cout<<"Enter the Name: ";
    cin>>get<1>(student);   
    cout<<"Enter the Year: ";
    cin>>get<2>(student);
    
    cout<<"Roll ="<<get<0>(student)<<endl;
    cout<<"Name ="<<get<1>(student)<<endl;
    cout<<"Year ="<<get<2>(student)<<endl;

}