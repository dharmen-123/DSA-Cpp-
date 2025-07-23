
 ////// ############## BInary Search #############

//  #include<iostream>
//  #include<bits/stdc++.h>
//  using namespace std;
//   int search(vector<int>& nums, int target) {
//         int s=0,e=nums.size()-1,mid;
//         while(s<=e){
//           mid=(s+e)/2;
//          if(nums[mid]<target){
//             s=mid+1;
//          }
//          else if(nums[mid]>target){
//             e=mid-1;
//          }
//          else {
//              return mid;
//          }
//         }
//         return -1;
//     } 
 
//  int main(){
//     vector<int>nums{-1,0,3,5,9,12};
//     int  target = 2;
//     cout<<search(nums,target);
//  }