//    ################# MAP ################
//  map is called associactive container 
//  it is  having key valur pair 
//  It store the data in ascending order by default
//  It is also callled self balancing binary search tree
//  There are order map and unorderd map 
//  It having key always be unique but value may be duplicate

// #include<iostream>
// #include<bits/stdc++.h>
// #include<map>
// using namespace std;

// int main(){
//   map<int , string>m;
// // // //  Three ways to insert the data in map 
//  m[102]="dhamendra";
//  m[100];
// //  m[100]="viplove";
//  m.insert({101,"Ravi"});
//  m.insert({104,"Ajay"});
//  m.insert(make_pair(103,"harsh"));
//  for(auto p:m){
//     cout<<p.first<<":"<<p.second<<endl;
//  }
//  auto j=m.find(106);
//  if(j!=m.end()){
//     m.erase(104);
//  }
//  else{
//     cout<<"\nnot found\n";
//  }
//  cout<<"maxsize of Map: "<<m.max_size()<<endl;
//  cout<<"After Deletion\n";
//  for(auto p:m){
//     cout<<p.first<<":"<<p.second<<endl;
//  }
// }



// #include<iostream>
// #include<bits/stdc++.h>
// #include<map>
// using namespace std;

// int main(){
//   map<string, int>p;
// //   p['c']=101;
// //   p.insert({'a',105});
// //   p.insert(make_pair('e',105));
// //     for(auto q:p){
// //     cout<<q.first<<":"<<q.second<<endl;
// //  }

// //  p["ravi"]=101;
// //   p.insert({"sunny",105});
// //   p.insert(make_pair("ajay",106));
// //     for(auto q:p){
// //     cout<<q.first<<":"<<q.second<<endl;
// //  }
// }



// #include<iostream>
// #include<bits/stdc++.h>
// #include<map>
// using namespace std;

// int main(){
//   map<int,string>d;
//   d[0]="DS";
//   d[1]="JAVA";
//   d[2]="DS";
//   d[3]="DS";
//   d[4]="DJANGO";
//   d[5]="JAVA";
// //   cout<<d.size();
// // int count=0, ans=0;

// for(auto i=d.begin();i!=d.end();i++){
//    cout<<i->first<<"="<<i->second<<endl;
// }
// }




// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//  map<string, int>mp;
//  int n;
//  string s;
//  cout<<"Enter the course :";
//  cin>>n;

//  for(int i=0;i<n;i++){
//     cout<<"Enter the course name:";
//     cin>>s;
//     mp[s]++;
//  }
//  for(auto p:mp){
//     cout<<p.first<<"="<<p.second<<"\n";
//  }
 
// }

//    #################  RINT UNIQUE STRINGS IN LEXIOGRAPHY ORDER WITH THEIR FREQUENCY  ########

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    vector<string>v{"pen","copy","pen","copy","eraser"};
   for(int i=0;i<v.size();i++){
      m[v[i]]++;
   }
//    for(auto a:m){
//     cout<<a<<" ";
//    }
}