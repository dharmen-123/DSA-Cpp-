
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
// };
// int main(){
//    vector<int>arr{2,5,3,6};
//     Node* y=new Node(arr[0],nullptr);
//    cout<<y->data<<" "<<y->next;
// //   ///// Without pointer
// //    Node y=Node(arr[0],nullptr);
// //    cout<<y.data<<" "<<y.next;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//    public:
//    int data;
//    Node* next;

//    Node(int d1,Node* next1){
//         data=d1;
//         next=next1;
//    }
//    Node(int d1){
//     data=d1;
//    }
// };
// Node* ArrtoLL(vector<int>& arr){
//      Node* head=new Node(arr[0]);
//      Node* move=head;

//      for(int i=1;i<arr.size();i++){
//         Node* temp = new Node(arr[i]);
//         move->next=temp;
//         move=temp;
//      }
//      return head;
// }
// int main(){
//     vector<int>arr{8,5,3,6};
//     Node* head=ArrtoLL(arr);
//     Node* next=head->next;
//     cout<<head->data<<" "<<next->data;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(NULL) {}
};
 
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
   ListNode* dumy=new ListNode(-1);          
   ListNode* cur=dumy;
   ListNode* temp1=l1;
   ListNode* temp2=l2;
   int carry=0;
   while(temp1!=NULL || temp2!=NULL){
          int sum=carry;
          if(temp1) sum+=temp1->data;
          if(temp2) sum+=temp2->data;
         ListNode* newNode= new ListNode(sum%10);
         carry=sum/10;
         if(temp1) temp1=temp1->next;
         if(temp2) temp2=temp2->next;
   }
    if(carry){
      ListNode* newNode = new ListNode(carry);
      cur->next=newNode;
    }
    return dumy->next;
 }

int main() {
    // First list: 2 -> 4 -> 3
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Second list: 5 -> 6 -> 4
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);

}