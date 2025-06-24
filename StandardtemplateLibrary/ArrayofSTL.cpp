
#include<iostream>
using namespace std;
#include<array>
int main(){
array<int,5>a{2,6,4,5,7};
array<int,5>a2{10,20,30,40,50};

cout<<"Size of array :"<<a.size()<<"\n";
for(int i=0;i<a.size();i++){
    cout<<a.at(i)<<"\t";
}
cout<<"\n";
cout<<"value of second array :\n";
for(int i=0;i<a2.size();i++){
    cout<<a2.at(i)<<"\t";
}
cout<<"\n";
// a2.fill(100);
a.swap(a2);
for(int i=0;i<a2.size();i++){
    cout<<a2.at(i)<<"\t";
}

}
