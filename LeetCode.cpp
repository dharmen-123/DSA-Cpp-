
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
