// namespace is a collection of identifier
// It removes the Ambiguity 
// By default nature of Namespace is the public
// There is no requirement of object for access the variable outside the class
// In namespace the variable is access outside the namepsace using Scope resolution operator


// #include<iostream>
// using namespace std;
// namespace Hello{
//     int a=100;
//     int b=200;
// }
// int main(){
//   cout<<Hello::a;
// }
//   ########################################

#include<iostream>
using namespace std;
namespace Hello{
    int a=100;
    int b=200;
void multiply(){
    cout<<"\nMultiply :"<<a*b;
}
class Bhopal{
  public:
  int x=20;
    
}obj;
}
int main(){
  cout<<Hello::a;
  Hello::multiply();
  cout<<"\n"<<Hello::obj.x;

}
