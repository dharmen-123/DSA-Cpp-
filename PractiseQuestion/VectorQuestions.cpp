

//  #################### Q.1 Missing Value Find in Vector array##########################

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//   vector<int>v={2,3};
//   int a; 
//   for(int i=1;i<v.size();i++){
//       a=v[i]-v[i-1];
//       if(a!=1){
//         cout<<"Missing number is "<<v[i]-1<<endl;
//       }       
// }
// }

////  #################### Q.1 Missing Value Find in Vector array##########################

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int missingNum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
            return 1;
        }
        for(int i=0;i<arr.size();i++){
          if((arr[i]-arr[i-1])!=1){
               return arr[i-1]+1;
          }
        }        
        
        return arr.back()+1;
    }
int main(){
  vector<int>arr={1,2,3,5};
  cout<<missingNum(arr);
}

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

////  ####################### Q.  88 ##############################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
             
//       // vector<int>num;
//           // for(int i=0;i<m;i++){
//           //   if(nums1[i]!=0){
//           //    num.push_back(nums1[i]);
//           // }
//           // }
//           // for(int j=0;j<n;j++){
//           //    num.push_back(nums2[j]);
//           // }

//           // sort(num.begin(),num.end());
//           // for(int i=0;i<m+n;i++){
//           //   cout<<num[i]<<" ";
//           // }
//         }
// int main(){
//     vector<int>nums1{1,2,3,0,0,0};
//     // vector<int>nums1{1};
//     int m = 3;
//     // int m = 1;
//     vector<int>nums2{2,5,6};
//     // vector<int>nums2{};
//     int  n = 3;
//     // int  n = 0;
//     merge(nums1,m,nums2,n);
// }



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     void rotate(vector<int>& nums, int k) {
//        vector<int>arr;
//             for(int i=nums.size()-1;i>k;i--){
//                  arr.push_back(nums[i]);
//             }
//            for(int i=0;i<nums.size()-k;i++){
//                 arr.push_back(nums[i]);
//             }
//     }

// int main(){
//       // vector<int>nums{1,2,3,4,5,6,7};
//       vector<int>nums{-1,-100,3,99};
//       int k = 2;
//       rotate(nums,k);
// }
 
// ############################# Q.       ######################

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     k = k % n; 
//     reverse(nums.begin(), nums.end());
//     reverse(nums.begin(), nums.begin() + k);
//     reverse(nums.begin() + k, nums.end());
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// int main() {
//     // vector<int> nums{1, 2, 3, 4, 5, 6, 7};
//       vector<int>nums{-1,-100,3,99};
//     int k = 2;
//     rotate(nums, k);
  
// }

////  ########## Q.153. Find Minimum in Rotated Sorted Array 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     int findMin(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         return nums[0];
//     }
// int main(){
//   //  vector<int>nums{3,4,5,1,2};
//    vector<int>nums{4,5,6,7,0,1,2};
//   cout<<findMin(nums);
//   }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end());
//         for(int i=0;i<intervals.size();i++){
//           for(int j=0;j<intervals.size()-1;j++){
//           cout<<intervals[i][j]<<" ";
//         }}
//     }
// int main(){
//     vector<vector<int>>intervals{{1,3},{2,6},{8,10},{15,18}};
//     merge(intervals);
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;
// #include <vector>

// int main() {
//     vector<int> v = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5};
    // auto new_end = unique(v.begin(), v.end());
    // for (int num : v) {
    //     cout << num << " ";
    // }     
    // v.erase(new_end, v.end());
    // cout<<"\n";
    // for (int num : v) {
    //     cout << num << " ";
    // }
//     return 0;

// }