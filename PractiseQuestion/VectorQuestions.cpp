

//  #################### Missing Value Find in Vector array##########################

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//   vector<int>v={1,2,3,5,6,7};
//   int a; 
//   for(int i=1;i<v.size();i++){
//       a=v[i]-v[i-1];
//       if(a!=1){
//         cout<<"Missing number is "<<v[i]-1<<endl;
//       }       
// }
// }


//  #################### Q.2 Remove dulicate Element from sorted array ##########################

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<int>p{1,1,1,2,2,3,3,4,5};
//     vector<int>v;
//     for(int i=0;i<p.size();i++){
//          if(p[i]!=p[i+1]){
//            v.push_back(p[i]);
//          }
//     }
//    for(auto x:v){
//     cout<<x<<"\t";
//    }
// }

////  ############################################

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
//     int removeElement(vector<int>& nums, int val) {
//         int k=0;   
//         for(int i=0;i<nums.size();i++){
//                 if(nums[i]==val){
//                     nums[i]='_';
//                 }
//                 else{
//                     k++;
//                 }
//             }
//             sort(nums.begin(),nums.end());
//             return k; 
//     }
// int main(){
//     vector<int>nums{3,2,2,3};
//     int val = 3;
//     cout<<removeElement(nums,val)<<endl;
// }

