

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
//                  string s="";
//            for(int i=0;i<nums.size();i++){
//               s+=to_string(nums[i]);
//            }
//            sort(s.begin(),s.end(),greater<int>());
//            return s; 
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

////   Q.378  ,Q.1859 , Q.55 ,Q.316 , Q.56, Q.315


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


 ////// ############## Q. 316 ##############

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     string removeDuplicateLetters(string s) {
//            string a="";
//            sort(s.begin(),s.end());
//             for(int i=0;i<s.size();i++){
//                 if(s[i]!=s[i+1]){
//                    a+=s[i];
//                 }              
//             }
//             return a;
//     }
// int main(){
//     string s="bcabc";
//     cout<<removeDuplicateLetters(s);
// }


//////// ################ Q.1903 #############

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string largestOddNumber(string num) {
//     int n=num.size();
//      if((num[n-1]-'0')%2==0){
//     char a='0';
//     for(int i=0;i<n;i++){
//         if(isdigit(num[i])){
//             if((num[i]-'0')%2!=0 && (num[i]-'0')>(a-'0')){
//                   a=num[i]; 
//             }
//         }
//     }    
//     return (a =='0')? "" : string(1,a);  
//     }
//     else if((num[n-1]-'0')==0){
        
//     }
//     else{
//         return num;
//     }
// }
// int main(){
//      string s="52";
//     //  cout<<int('2');
//      cout<<largestOddNumber(s);
// }

//////   ######## uniqueOccurrences  Q. 1207 ###################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool uniqueOccurrences(vector<int>& arr) {
//     map<int,int>m;
//     vector<int>c;
//     for(int i=0;i<arr.size();i++){
//         m[arr[i]]++;
//     } 
//     for(auto p:m){
//         c.push_back(p.second);
//     }
//     sort(c.begin(),c.end());
//       for(int i=0;i<c.size()-1;i++){
//          if(c[i]==c[i+1]){
//             return false;
//              break;
//          }
//     }
//         return true;
// }
// int main(){
//   vector<int>arr{-3,0,1,-3,1,1,1,-3,10,0};
//   cout<<uniqueOccurrences(arr);
// }

// ###################### Remove all zeros in end #########

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void pushZerosToEnd(vector<int>& arr) {
//         int temp;
//     for(int i=1;i<arr.size();i++){
//         if(arr[i-1]==0){
//              temp=arr[i-1];
//              arr[i-1]=arr[i];
//              arr[i]=temp;
//         }
//     }   
//       for(auto p:arr){
//         cout<<p<<" ";
//      }
//     // vector<int>num;   
//     // int n=arr.size();
//     // int c=0;
//     //  for(int i=0;i<n;i++){
//     //     if(arr[i]!=0){
//     //        num.push_back(arr[i]);
//     //     }
//     //     else{
//     //         c++;
//     //     }
//     //  }
//     //  while(c>0){
//     //     num.push_back(0);
//     //      c--;
//     //  }
//     //  arr.clear();
//     //  for(auto p:num){
//     //     arr.push_back(p);
//     //  }

// }

// int main(){
//      vector<int>arr{1, 2, 0, 4, 3, 0, 5, 0};
//      pushZerosToEnd(arr);     
// }

////// ###################### Remove all zeros in end #########

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void pushZerosToEnd(vector<int>& arr) {
//       int index=0;        
//        for(int i=0;i<arr.size();i++){
//         if(arr[i]!=0){
//             arr[index++]=arr[i];   
//         }
//     }   
//     while(index<arr.size()){
//         arr[index++]=0;
//     }
//       for(auto p:arr){
//         cout<<p<<" ";
//      }
// }
// int main(){
//      vector<int>arr{1, 2, 0, 4, 3, 0, 5, 0};
//      pushZerosToEnd(arr);  
// }

//// ################### Q.53 ###############################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxSubArray(vector<int>& nums) {
// //    int max=INT_MIN;
//    int max=0;
//    int n=nums.size();
//    int sum=0;
//    for(int i=0;i<n;i++){
//      sum=sum+nums[i];
//      if(sum>max){
//         max=sum;
//      }
//      if(sum<0){
//         sum=0;
//      }
//    }
//     return max;
// }
// int main(){
//     vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
//     // vector<int>nums{5,4,-1,7,8};
//     cout<<maxSubArray(nums);
// }

// ############################# Q. 8 ######################### 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int myAtoi(string s) {
//    int a = 0;
//     int sign = 1;
//     bool started = false;

//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == '-' && !started) {
//             sign = -1;
//             started = true;
//         } else if (isdigit(s[i])) {
//             a = a * 10 + (s[i] - '0');
//             started = true;
//         } else if (started) {
//             break; 
//         }
//          else if(s[i] == ' '){
//             continue;
//          }
//         else{
//             return 0;
//         }
//     }
//     return a * sign;
// }
// int main(){
//     string s="  -042";
//     cout<<myAtoi(s);
// }



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void backtrack(vector<string>& result, string current, int open, int close, int n) {
        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            backtrack(result, current + '(', open + 1, close, n);
        }

        if (close < open) {
            backtrack(result, current + ')', open, close + 1, n);
        }
    }

    vector<string>generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }


int main(){
    int n=3;
    generateParenthesis(n);
}