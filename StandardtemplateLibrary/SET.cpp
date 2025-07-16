//    ############### SET ##################

// It also a container 
// It also a ordered set and unordered set 
// the key i n set always br unique 
// It use hash function which manage the set
// It is sorted  in ascending order 
// It is use to show the data in sorted order 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  set<int>s;
  s.insert(20);
  s.insert(75);
  s.insert(86);
  s.insert(64);
  s.insert(24);
for(auto a:s){
    cout<<a<<"\n";
}
}