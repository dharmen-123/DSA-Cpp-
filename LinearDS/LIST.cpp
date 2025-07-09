// // ######## Forward list or singly linked list  ##############
// // It is non contiguous memory allocation 


#include<iostream>
using namespace std;
#include<forward_list>

int main(){
 
    forward_list<int>f;
    f.push_front(10);
    f.push_front(43);
    f.push_front(25);
    f.push_front(26);

    for(auto p:f){
        cout<<p<<"\t";
    }
    f.pop_front();
cout<<"\nAfter the deletion "<<endl;
    for(auto p:f){
        cout<<p<<"\t";
    }
}
