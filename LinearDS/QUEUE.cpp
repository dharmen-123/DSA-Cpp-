  ///// ################## QUEUE ############################

// Queue is the FIFO first in first out 
// methods in queue 
// push , pop , back , front 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(5);
//     q.push(78);
//     q.push(23);
//     q.push(4);
//     cout<<"last element :"<<q.back()<<endl;
//     while (!q.empty())
//     {
//       cout<<q.front()<<endl;
//       q.pop();
//     }
// }

        //   ########### DEQUE #################
//   Insertion and Deletion from both side 
//  It belongs to non contiguous memory 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  deque<int>d;
  d.push_front(2);
  d.push_back(5);
  d.push_front(7);
  d.push_back(9);

  for(auto &q:d){
    cout<<++q<<" ";
  }
  cout<<endl;
  for(auto p:d){
    cout<<p<<" ";
  }
  
}

//##############  auto ########
// auto bring the copy of the value of array 
