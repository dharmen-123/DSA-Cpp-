
// ###########################  Q.1 ###################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> twoSum(vector<int>& nums, int target){
//          for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//               if((nums[i]+nums[j])== target){
//                   nums.clear();
//                   nums.push_back(i);
//                   nums.push_back(j);
//                   break;
//             }
//          }
//       }
//          for(auto a:nums){
//             cout<<a<<" ";
//          }
//          return nums;
//  }
// int main(){
//    vector<int>nums{2,5,5,11};
//    int t=10;
//    twoSum(nums,t);
// }


// // // ###################### Q.2 Leetcode #####################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// struct ListNode {
//     int data;
//     ListNode* next;
//     ListNode(int val) : data(val), next(NULL) {}
// };
 // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//    ListNode* dumy=new ListNode(-1);          
//    ListNode* cur=dumy;
//    ListNode* temp1=l1;
//    ListNode* temp2=l2;
//    int carry=0;
//    while(temp1!=NULL || temp2!=NULL){
//           int sum=carry;
//           if(temp1) sum+=temp1->data;
//           if(temp2) sum+=temp2->data;
//          ListNode* newNode= new ListNode(sum % 10);
//          cur->next = newNode;
//          cur = cur->next;
//          carry=sum/10;
//          if(temp1) temp1=temp1->next;
//          if(temp2) temp2=temp2->next;
//    }
//     if(carry){
//       ListNode* newNode = new ListNode(carry);
//       cur->next=newNode;
//     }
//     return dumy->next;
//  }

// int main() {
//     ListNode* l1 = new ListNode(2);
//     l1->next = new ListNode(4);
//     l1->next->next = new ListNode(3);
//     ListNode* l2 = new ListNode(5);
//     l2->next = new ListNode(6);
//     l2->next->next = new ListNode(4);
//     ListNode* result = addTwoNumbers(l1, l2);
//      while (result) {
//         cout << result->data;
//         if (result->next) cout << " -> ";
//         result = result->next;
//     }
//     cout << endl;
// }

 // // // ##################### Valid parenthesis ###################

//  #include<iostream>
//  #include<bits/stdc++.h>
//  using namespace std;
//      bool isBalanced(string& k) {
//         stack<char>st;
//         char a;
//         for(int i=0;i<k.length();i++){
//          if(k[i] == '{' || k[i] == '(' || k[i] == '['){
//               st.push(k[i]);
//          }
//          else{
//             if(st.empty()) return false;
//              a=st.top();
//              if((k[i]==')' && a=='(') ||
//              (k[i]=='}' && a=='{') ||
//              (k[i]==']' && a=='['))
//               st.pop();
//              else{
//                return false;
//              }
//          }
//         }
//         if(st.empty()){
//          return true;
//         }
//         else{
//          return false;
//         }
//     }
//  int main(){
//     string k= "{)]}" ;
//     cout<<isBalanced(k);
//  }


// // // ################## Q.162  Peak Element ###################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     int findPeakElement(vector<int>& nums) {
        //  int n=nums.size();
        //  int i=1;
        //  int peak;
        //  if(n==1 || nums[0]>nums[1])   return 0;
        //  else if(nums[n-1]>nums[n-2]) return n-2;
        //  while(n-1>i){
        //     if((nums[i-1]<nums[i]) && nums[i]>nums[i+1]){
        //         peak= i;
        //     }
        //     i++;
        // }
        // return peak;
//     }
// int main(){
//      vector<int>nums{1,2,1,3,5,6,4};
//     //  vector<int>nums{1,2};
//      cout<<findPeakElement(nums);
// }

// // // ########### Q. 155 Min Stack ##################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class MinStack {
// public:

// MinStack() {

//     }
    
//     void push(int val) {

//     }
    
//     void pop() {
        
//     }
    
//     int top() {
        
//     }
    
//     int getMin() {
        
//     }
// };

// int main(){
//     MinStack* obj = new MinStack();
//     obj->push(2);
//     obj->pop();
//     int param_3 = obj->top();
//     int param_4 = obj->getMin();
// }

// //// ################# 204 ###############

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//  int countPrimes(int n) {
//         if(n==0 || n==1) return 0;
//         int count=0,c=0;
//         int i=2;
//         while(n>i){
//            for(int j=1;j<=i;j++){
//                   if(i%j==0){
//                       c++;  
//                   }
//            }
//           if(c==2){
//                 count++;
//           } 
//           c=0;   
//            i++;
//         }
//     return count;
// }

// int main(){
//    int n=0;
//    cout<<countPrimes(n);
// }

// // // ############### Q.231 ######################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     bool isPowerOfTwo(int n) {
//     if (n <= 0) return false;
//     return (n & (n - 1)) == 0;
//     }
// int main(){
//    int n=12;
//    cout<<isPowerOfTwo(n);
// }

// // // ############## Q.   ####################################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     bool isPowerOfThree(int n) {
//      if( n > 0 && 1162261467 % n == 0)
//          return true;
    
//     return false;
//     }

// int main(){
//     int n=243;
//     cout<<isPowerOfThree(n);
// }

// // // ############################ Q. 5 ################################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//  string longpallindrome(string s){
//       int n=s.length();
//       int  start=0, maxlen=1;

//       for(int i=0;i<n;i++){
//         int l=i, r=i;
//         while(l>=0 && r<n && s[l]==s[r]){
//              if(r-l+1>maxlen){
//                   start=l;
//                   maxlen=r-l+1; 
//              }
//             l--; r++;
//         }

//            l=i, r=i+1;
//         while(l>=0 && r<n && s[l]==s[r]){
//              if(r-l+1>maxlen){
//                   start=l;
//                   maxlen=r-l+1; 
//              }
//             l--; r++;
//         }
//       }
//       return s.substr(start, maxlen);
//  }
// int main(){
//     string s="abcbcbdefs";
//     cout<<longpallindrome(s);
// }

// // // ############ Bitwise ORs of subarray ####################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int subarrayBitwiseORs(vector<int>& arr) {
//     unordered_set<int> res;
//     unordered_set<int> curr;

//     for (int num : arr) {
//         unordered_set<int> next;
//         next.insert(num);
//         for (int x : curr) {
//             next.insert(x | num);
//         }
//         curr = next;
//         res.insert(curr.begin(), curr.end());
//     }
//     return res.size();
// }
// int main(){
//    vector<int>arr{1,2,4};
//    cout<<subarrayBitwiseORs(arr);
// }

// // //  ##################### Q.  myAtoi #########################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//  int myAtoi(string s) {
//     long long a = 0;
//     int sign = 1;
//     bool started = false;

//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == '-' && !started) {
//             sign = -1;
//             started = true;
//         } else if (isdigit(s[i])) {
//             a = a * 10 + (s[i] - '0');
//             started = true;
//             if(sign*a<= INT_MIN)  return INT_MIN;
//             if(sign*a>= INT_MAX)  return INT_MAX;
//         } else if (started) {
//             break; 
//         }else if(s[i] == ' '){
//             continue;
//          }
//          else {
//             return 0;
//         }
//     }
//     return a * sign;
//     }
// int main(){
//      string s="42";
//      cout<<myAtoi(s);
// }

// // // #################   Valid Number #######################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isNumber(string s) {
    //  int n = s.length();
    // int c = 0;
    // bool p = false;
    // if (n == 1 && (s[0] == '.' || isalpha(s[0]))) return false;
    // for (int i = 0; i < n; i++) {
    //     if (i == 0 && !isdigit(s[i]) && s[i] != '-' && s[i] != '+' && s[i] != '.') {
    //         return false;
    //     }
    //     else if (n != 1) {
    //         if (isalpha(s[n - 1])) return false;
    //     }
    //     if (isalpha(s[i])) {
    //         c++;
    //         p = true;
    //         if (c == 2) return false;
    //     }
    //     else if (p && s[i] == '.') {
    //         return false;
    //     }
    //     else if (s[i] == '.') {
    //         c++;
    //         if (c > 1) return false;
    //     }
    //     else if ((s[i] == '-' || s[i] == '+') && i != 0) {
    //         return false;
    //     }
    // }
    // return true;
// }
// int main(){
//      string s= "..";
//      cout<<isNumber(s);
// }

// // //  #########################   Pascals triangle ######################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>pas;
//         vector<int>tri;
//         tri.push_back(1);
//          int j=0;
//        while(numRows>0){
//             pas.push_back(tri);
//              tri.clear();
//             int n=pas[j].size();
//             tri.push_back(1);
//           for(int i=0;i<n-1;i++){
//                int a=pas[j][i]+pas[j][i+1];
//                    tri.push_back(a);   
//              }
//              tri.push_back(1);   
//            j++;
//            numRows--;  
//        }
//     return pas;
// }
// int main(){
//    int n=5;
//   vector<vector<int>>pas= generate(n);
//           for(auto a:pas){
//         for(auto b:a){
//             cout<<b<<" ";
//         }
//         cout<<endl;
//        }
// }

// // //  ############ Q.58 #####################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int lengthOfLastWord(string s) {
//       reverse(s.begin(),s.end());
//       string w="";
//       bool p=false;
//       for(int i=0;i<s.length();i++){
//           if(s[i]!=' '){
//             p=true;
//             w+=s[i];
//           }
//           else{
//             if(p){
//                 break;
//             }
//               p=false;
//           }
//       }
//     return w.length();
// }
// int main(){
//    string s="luffy is still joyboy" ;
//    cout<<lengthOfLastWord(s);
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// long long minCost(vector<int>& basket1, vector<int>& basket2) {
//      int n=basket1.size();  
//      int m=basket2.size();
//      if(n!=m) return -1;  
    


//  }
// int main(){
//     vector<int>basket1{4,2,2,2};
//     vector<int>basket2{1,4,1,2};   
//      cout<<minCost(basket1,basket2);

// }

// // // ################## Q.88 ###################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int a=m+n;  
//         for(int i=0;i<n;i++){
//             nums1.pop_back();        
//         }
//         for(int j=0;j<n;j++){
//             nums1.push_back(nums2[j]);
//         }
//         sort(nums1.begin(),nums1.end());
        
//         for(auto p:nums1){
//             cout<<p<<" ";
//         }
//     }
// int main(){
//     vector<int>nums1{1,2,3,0,0,0};
//     vector<int>nums2{2,5,6};
//     int m=3,n=3;
//     merge(nums1,m,nums2,n);
// }

// // //  ###################### Q.34 ########################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int>value(2,-1);
//         bool p=true;
//         for(int i=0;i<nums.size();i++){
//            if(nums[i]==target){
//                 if(value[0]==-1) 
//                      value[0]=i;
//              value[1]=i;
//            }
//         }
//       return value;
// }
// int main(){
//       vector<int>nums{5,7,7,7,8,10};
//       int target=7;
//       vector<int>a=searchRange(nums,target);
//          for(auto b:a){
//             cout<<b<<" ";
//          }   
// }

// // // ##################### Q.367 ######################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isPerfectSquare(int num) {
//         double a=pow(num,0.5);
//         long long b=a;
//         if(a!=b){
//             return false;
//         }
//         return true;
//     }
// int main(){
//     int num=14;
//     cout<<isPerfectSquare(num);
// }


// // //  ######################## Q.121 ##############################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxProfit(vector<int>& prices) {
//     int min_price = INT_MAX;
//     int max_profit = 0;
//     for (int price : prices) {
//         if (price < min_price) {
//             min_price = price;
//         } else {
//             max_profit = max(max_profit, price - min_price);
//         }
//     }
//     return max_profit;
// }
// int main(){
//  vector<int>prices{7,1,5,3,6,4};
//  cout<<maxProfit(prices);
// }


// // // ######################### Q.66 ####################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> plusOne(vector<int>& digits) {
//         vector<int> nums;
//         string numStr = "";
//         for (int i = 0; i < digits.size(); i++) {
//             numStr += to_string(digits[i]);
//         }
//         int carry = 1;
//         for (int i = numStr.size() - 1; i >= 0; i--) {
//             int digit = numStr[i] - '0';
//             int sum = digit + carry;
//             numStr[i] = (sum % 10) + '0';
//             carry = sum / 10;
//         }
//         if (carry) {
//             numStr = '1' + numStr;
//         }
//         for (char c : numStr) {
//             nums.push_back(c - '0');
//         }
//         return nums;
// }
// int main(){
//   vector<int>digits{4,3,2,1};
//   vector<int>a= plusOne(digits);
//     for(auto b:a){
//         cout<<b<<" ";
//     }
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
    return 0;
    }
int main(){
   vector<int>nums{3,3,3,3,3};
   cout<<findDuplicate(nums);
}