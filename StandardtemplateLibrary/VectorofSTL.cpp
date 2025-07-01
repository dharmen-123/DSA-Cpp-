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

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){

//  vector<int>p(2,6);
//  p.push_back(5);
//  p.push_back(8);
//  cout<<p[0]<<endl;
//  cout<<p[1]<<endl;
//  cout<<p.size()<<endl;
//  p.resize(3);
//  cout<<"After resize :"<<p.size()<<endl;
//  p.clear();
//  cout<<"After clear :"<<p.size()<<endl;

// }

// push_back - It insert the value from the last on array 
// clear - It make the array empty but the object is present
// resize -It shrink the array
// pop_back- It delete the value from the last of array
// max_size - Maximum size of array in vector


// #include<iostream>
// using namespace std;
// # include<vector>
// int main(){


//     vector<int>v{4,2,6};
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     v.push_back(7);
//     cout<<v.size()<<endl;
//     cout<<v.capacity();
//     v.push_back(8);

// }

// capacity() it create double memory according dynamic entry
// It define the how much space is expand 
// Size define the space is occupied by the values

//  #################### Missing Value Find ##########################

#include<iostream>
using namespace std;
#include<vector>

int main(){
  vector<int>v={1,2,3,5,6,7};
  int a;
  for(int i=1;i<v.size();i++){
      a=v[i]-v[i-1];
      if(a!=1){
        cout<<"Missing number is "<<v[i]-1<<endl;
      }       
}
}



// In buil sort function use which algo 

// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>

// int main(){
//  vector<int>v{4,6,1,7,2};
//    sort(v.begin(),v.end());
//    for(auto k:v){
//     cout<<k<<"\t";
//    }
//    cout<<endl;
//    sort(v.begin(),v.end(),greater<int>());
//   for(auto k:v){
//      cout<<k<<"\t";
//    }
// }

// less<int>  --> Comparator function 
// by default it take less 

//  ######### INSERTION At specific position ###############

// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// int main(){

// vector<int>v{4,1,3,5,6};
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;
// v.insert(v.begin()+1,12);
// cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;
// for(auto a:v){
//     cout<<a<<"\t";
// }
// }

//  ######### ERASE At specific position ###############

// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// #include<iterator>
// int main(){

//     vector<int>v{3,1,5,2,6};
//     v.insert(v.begin()+2,10);
//  vector<int>::iterator it=v.begin();
//  v.erase(it+1);
   
// }
