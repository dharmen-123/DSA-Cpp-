include<iostream>
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