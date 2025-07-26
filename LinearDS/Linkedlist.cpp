
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

// // // ###### Convert the Array to Linked List ###########

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

// // //  ################# DELETION FROM THE HEAD of the list #########
// // //  ################# DELETION FROM THE LAST of the list #########

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;

//     Node(int data1,Node* next1){
//          data=data1;
//          next=next1;
//     }
//     Node(int data1){
//     data=data1;
//     next=NULL;
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
// void show(Node* head){
//      while(head!=NULL){
//         cout<<head->data<<" ";
//          head=head->next;
//      }
//      cout<<endl;
// }
// //////<------------- Delete from the head ---------------->

// Node* Deletehead(Node* head){
//     if(head==NULL) return head;
//     Node* temp=head;
//     head=head->next;
//     delete temp;

//     return head;
// }

// //////<------------- Delete from the last ----------------> 

// Node* DeleteLast(Node* head){
//     if(head==NULL || head->next==NULL) return NULL;
//     Node* temp=head;
//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//     delete temp->next;
//     temp->next=nullptr;
   
//    return head;
// }

// int main(){
//    vector<int>arr{2,4,1,6};
//    Node* head =ArrtoLL(arr);
//    show(head);
// //    head=Deletehead(head);
//    head=DeleteLast(head); 
//    show(head);
// }

// // // Delete from the Kth position of the list ######

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data1,Node* next1){
         data=data1;
         next=next1;
    }
    Node(int data1){
    data=data1;
    next=NULL;
   }
};
Node* ArrtoLL(vector<int>& arr){
     Node* head=new Node(arr[0]);
     Node* move=head;
     for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        move->next=temp;
        move=temp;
     }
     return head;
}
void show(Node* head){
     while(head!=NULL){
        cout<<head->data<<" ";
         head=head->next;
     }
     cout<<endl;
}


int main(){
   vector<int>arr{2,4,1,6};
   Node* head =ArrtoLL(arr);
   show(head);

}


// // // ##################  Q. 19 #######################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// struct ListNode{
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}

// };
// ListNode* removeNthFromEnd(ListNode* head, int n) {
                   

// }
// int main(){

// }