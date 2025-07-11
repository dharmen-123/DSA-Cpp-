

//  #################### Q.1 Missing Value Find in Vector array##########################

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

/////// #################### find Median Sorted Arrays ############

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//      double sum=0;    
//      for(int i=0;i<nums2.size();i++){
//             nums1.push_back(nums2[i]);
//         }
//          sort(nums1.begin(),nums1.end());
//      for(auto x:nums1){
//         sum+=x;
//      } 
//        return sum/nums1.size();
// }
// int main(){
//     vector<int>nums1{1,3};
//     vector<int>nums2{2};    
//     cout<<findMedianSortedArrays(nums1,nums2);

// }




// ############ Remove the duplicate from the sorted array leetcode Q.26 #####
// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>

// int removeDuplicates(vector<int>& nums) {
//     vector<int>v; 
//     int k=0;
//     for(int i=0;i<nums.size();i++){
//          if(nums[i]!=nums[i+1]){
//             k++;
//            v.push_back(nums[i]);
//          }
//          else{
//             v.push_back('_');
//          }
//     }   
//       nums.clear();
//     for(int i=0;i<v.size();i++){
//          nums.push_back(v[i]);
//       }
//        sort(nums.begin(),nums.end());
//       return k;
//     }
// int main(){
//     vector<int>nums{0,0,1,1,1,2,2,3,3,4};
//     cout<<removeDuplicates(nums);
// }

////  ####################### Q.   ##############################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//           vector<int>num;
//           for(int i=0;i<m;i++){
//             if(nums1[i]==0){
//              num.push_back(nums1[i]);
//           }
//           }
//           for(int j=0;j<n;j++){
//              num.push_back(nums2[j]);
//           }
//           sort(num.begin(),num.end());
//     }
// int main(){
//     // vector<int>nums1{1,2,3,0,0,0};
//     vector<int>nums1{1};
//     // int m = 3;
//     int m = 1;
//     // vector<int>nums2{2,5,6};
//     vector<int>nums2{};
//     // int  n = 3;
//     int  n = 0;
//     merge(nums1,m,nums2,n);
// }