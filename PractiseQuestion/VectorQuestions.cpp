

//  #################### Q.1 Missing Value Find in Vector array##########################

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//   vector<int>v={2,3,5};
//   int a; 
//   for(int i=1;i<v.size();i++){
//       a=v[i]-v[i-1];
//       if(a!=1){
//         cout<<"Missing number is "<<v[i]-1<<endl;
//       }       
// }
// }

////  #################### Q.1 Missing Value Find in Vector array##########################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     int missingNum(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
//         if(arr[0]!=1){
//             return 1;
//         }
//         for(int i=1;i<arr.size();i++){
//           if((arr[i]-arr[i-1])!=1){
//                return arr[i-1]+1;
//           }
//         }          
//         return  arr.back()+1;
//     }
// int main(){
//   vector<int>arr={2,3,4,5};
//   cout<<missingNum(arr);
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

// // // ############# Remove duplicate element from sorted array using inbuild method 

// #include <iostream>
// #include <algorithm>
// using namespace std;
// #include <vector>

// int main() {
//     vector<int> v = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5};
//     auto new_end = unique(v.begin(), v.end());
//     for (int num : v) {
//         cout << num << " ";
//     }     
//     v.erase(new_end, v.end());
//     cout<<"\n";
//     for (int num : v) {
//         cout << num << " ";
//     }
//     return 0;
// }

////// ###################### Q.- 3SUM ######################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> threeSum(vector<int>& nums) {
//          vector<vector<int>>v;
//          vector<int>temp;
//              for(int i=0;i<nums.size()-2;i++){
//                for(int j=i+1;j<nums.size()-1;j++){
//                   for(int k=j+1;k<nums.size();k++){
//                    if((nums[i]+nums[j]+nums[k])==0){
//                     temp={nums[i],nums[j],nums[k]};
//                     sort(temp.begin(),temp.end());
//                     v.push_back(temp);
//                     temp.clear();
//                    }
//                  }
//                }
//             }
//             sort(v.begin(),v.end());
//             auto dup=unique(v.begin(),v.end());
//             v.erase(dup,v.end());
//             for(auto row:v){
//                 for(auto col :row){
//                     cout<<col<<" ";
//                 }
//                 cout<<endl;
//             }
//             return v;
// }
// int main(){
//      vector<int>nums{-1,0,1,2,-1,-4};
//      vector<int>nums{-2,0,1,1,2};
//       threeSum(nums);
// }

////// ################## 2nd Way Q.-3SUM ######################

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> v;
//     sort(nums.begin(), nums.end());  
//     for (int i = 0; i < nums.size() - 2; i++) {
//         if (i > 0 && nums[i] == nums[i - 1]) continue;  
//         int left = i + 1;
//         int right = nums.size() - 1;
//         while (left < right) {
//             int total = nums[i] + nums[left] + nums[right];
//             if (total == 0) {
//                 v.push_back({nums[i], nums[left], nums[right]});
//                 while (left < right && nums[left] == nums[left + 1]) left++;  // Skip duplicates
//                 while (left < right && nums[right] == nums[right - 1]) right--;
//                 left++;
//                 right--;
//             } else if (total < 0) {
//                 left++;
//             } else {
//                 right--;
//             }
//         }
//     }
//     return v;
// }
// int main() {
//     vector<int> nums{0,0,0,0};
//     vector<vector<int>> result = threeSum(nums);

//     for (auto& row : result) {
//         for (int col : row) {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



//////  ################### Q. 16  ###################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//    int threeSumClosest(vector<int>& nums, int target) {
//         int close=INT_MAX;
//         int result=0;
//         sort(nums.begin(),nums.end());
//         cout<<close<<endl;
//            for(int i=0;i<nums.size()-2;i++){
//               int left=i+1;
//               int right=nums.size()-1;
//               while(left<right){
//                   int total=nums[i]+nums[left]+nums[right];
//                   int diff=abs(total-target);
//                   if(diff<close){
//                     close=diff;
//                     result=total;
//                   } 
//                   else if(total<target){
//                     left++;
//                   }
//                   else{
//                     right--;
//                   }
//         }
//     }
//         return result;   
//     }

// int main(){
//     vector<int>nums{-1,2,1,-4};
//     int target=1;
//     cout<<threeSumClosest(nums,target);

// }


 // // // ####################### Q . 18 ##############

//  #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> fourSum(vector<int>& nums , int target) {
//     vector<vector<int>> v;
//     sort(nums.begin(), nums.end());  
//     for (int i = 0; i < nums.size() - 3; i++) {
//         if (i > 0 && nums[i] == nums[i - 1]) continue;  
//     for (int j = i+1; j < nums.size() - 2; j++) {
//         if (j > i+1 && nums[j] == nums[j - 1]) continue;  
//         int left = j + 1;
//         int right = nums.size() - 1;
//         while (left < right) {
//             long long total =(long long)nums[i] + nums[j] + nums[left]+nums[right];
//             if (total == target) {
//                 v.push_back({nums[i], nums[j], nums[left],nums[right]});
//                 while (left < right && nums[left] == nums[left + 1]) left++;  // Skip duplicates
//                 while (left < right && nums[right] == nums[right - 1]) right--;
//                 left++;
//                 right--;
//             } else if (total < target) {
//                 left++;
//             } else {
//                 right--;
//             }
//         }
//     }
//     }
//     return v;
// }
// int main() {
//     vector<int> nums{1,0,-1,0,-2,2};
//     int target=0;
//     vector<vector<int>> result = fourSum(nums, target);
//     for (auto& row : result) {
//         for (int col : row) {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // //  ############# Q. 1985 ################
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//    string kthLargestNumber(vector <string>& nums, int k) {
//     vector<long long>v;
//     int n=nums.size();
//       for(int i=0;i<nums.size();i++){
//         long long a=stoll(nums[i]);
//           v.push_back(a);
//       }
//         sort(v.begin(),v.end());
//        nums.clear();
//         for(int i=0;i<v.size();i++){
//           string a=to_string(v[i]);
//           nums.push_back(a);
//       }
//      return nums[n-k];
//     }

// int main(){
//     vector<string>nums{"683339452288515879","7846081062003424420","4805719838","4840666580043","83598933472122816064","522940572025909479","615832818268861533","65439878015","499305616484085","97704358112880133","23861207501102","919346676","60618091901581","5914766072","426842450882100996","914353682223943129","97","241413975523149135","8594929955620533","55257775478129","528","5110809","7930848872563942788","758","4","38272299275037314530","9567700","28449892665","2846386557790827231","53222591365177739","703029","3280920242869904137","87236929298425799136","3103886291279"};
//     int k=3;
//     cout<<kthLargestNumber(nums,k);
// }

