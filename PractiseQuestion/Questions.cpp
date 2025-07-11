

//////////  Q.1  find volume of cynlinder        ---->

// #include <iostream>
// #include<cmath>
// #include<iomanip>
// using namespace std;
// int main()
// {

//       float r, h;
//       float pi = 3.14;

//       cout<<"Enter radius and height of cylinder";
//       cin>>r>>h;
//       // float volume = 3.14*r*r*h;
//       float volume = 3.14*pow(r,2)*h;
//       cout<<volume;

//      return 0;
// }

/// // Q.2 find distance between two points using sqrt and pow function------>

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     float  x1, y1 ,x2, y2;
//     cout<<"Enter the Two points  Coordinate :"<<endl;
//     cout<<"x1 = ";  cin>>x1;
//     cout<<"y1 = ";  cin>>y1;
//     cout<<"x2 = ";  cin>>x2;
//     cout<<"y2 = ";  cin>>y2;
//     float Dis;
//     Dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
//     cout<<"Distance B/T two points is : "<<Dis;

//     return 0;
// }

//////  ###################### leetcode Q.    ##############

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int>result; 
//     for(int i=0;i<nums.size();i++){
            
//      }   

// }
//     int main(){
//       vector<int>nums={1,2,3,4};
//     productExceptSelf(nums);

//     return 0;
// }

//////  ###################### leetcode Q.215    ##############

// #include<iostream>
// using namespace std;
// #include<bits/stdc++.h>
//     int findKthLargest(vector<int>& nums, int k) {
//             sort(nums.begin(),nums.end());
//             int n=nums.size();
//             return nums[n-k];
//     }
// int main(){
//    vector<int>nums{3,2,1,5,6,4};
//    int k=2;
//    cout<<"\nKth largest elements :"<<findKthLargest(nums,k);    
// }


//////  ###################### leetcode Q.217    ##############

// #include<iostream>
// using namespace std;
// #include<bits/stdc++.h>
//  bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         bool k=false;
//           for(int i=0;i<nums.size()-1;i++){
//                if( nums[i]==nums[i+1]){
//                    k=true;
//                }
//           }
//           if(k){
//             return true;
//           }
//           else{
//             return false;
//           }
//     }
// int main(){
//    vector<int>nums{3,2,1,5,1,4};
//    cout<<containsDuplicate(nums);   
// }

//////  ###################### leetcode Q.179    ##############

// #include<iostream>
// using namespace std;
// #include<bits/stdc++.h>

// string largestNumber(vector<int>& nums) {
//            vector<string>s;
//            for(int i=0;i<nums.size();i++){
//               s.push_back(to_string(nums[i]));
//            }
//            sort(s.begin(),s.end(),greater<int>());
//            string r;
//            for(auto x:s){
//                r+=x;
//            }
//        return r;
//     }
// int main(){
    
// vector<int>nums{3,30,34,5,9};
//   cout<<"Output is :";
//   cout<<largestNumber(nums);
// }

//////  ###################### leetcode Q.169    ##############

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int majorityElement(vector<int>& nums) {
 
  
// }
// int main(){
//     vector<int>nums{2,2,1,1,1,2,2};
//     cout<<majorityElement(nums);
// }

////  Q.29, Q.378  ,Q.1859

//////  ###################### leetcode Q.274    ##############

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     int hIndex(vector<int>& citations) {
//          sort(citations.begin(), citations.end(), greater<int>());
//          for(auto x:citations){
//           cout<<x<<"\t";
//          }
//         int h = 0;
//         for (int i = 0; i < citations.size();i++) {
//             if (citations[i] > i + 1) {
//                 h = i + 1;  
//             } else {
//                 break;
//             }
//         }
//         return h;

//     }

// int main(){
    
//     vector<int>nums{1,3,1};
//     cout << "\nH-Index: " <<hIndex(nums) << endl;
// }




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    string removeDuplicateLetters(string s) {
           string a="";
           sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++){
                if(s[i]!=s[i+1]){
                   a+=s[i];
                }
              
            }
            return a;
    }

int main(){

    string s="bcabc";
    cout<<removeDuplicateLetters(s);
}