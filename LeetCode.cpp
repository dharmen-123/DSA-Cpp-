
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
//          int n=nums.size();
//          int i=1;
//          int peak;
//          if(n==1 || nums[0]>nums[1])   return 0;
//          else if(nums[n-1]>nums[n-2]) return n-2;
//          while(n-1>i){
//             if((nums[i-1]<nums[i]) && nums[i]>nums[i+1]){
//                 peak= i;
//             }
//             i++;
//         }
//         return peak;
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