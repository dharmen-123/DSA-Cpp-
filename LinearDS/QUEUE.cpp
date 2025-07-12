  ///// ################## QUEUE ############################

// Queue is the FIFO first in first out 
// methods in queue 
// push , pop , back , front 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(5);
    q.push(78);
    q.push(23);
    q.push(4);
    cout<<"last element :"<<q.back()<<endl;
    while (!q.empty())
    {
      cout<<q.front()<<endl;
      q.pop();
    }
}