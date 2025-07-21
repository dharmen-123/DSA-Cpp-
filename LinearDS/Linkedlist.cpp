
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


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* next;

   Node(int d1,Node* next1){
        data=d1;
        next=next1;
   }
   Node(int d1){
    data=d1;
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
int main(){
    vector<int>arr{8,5,3,6};
    Node* head=ArrtoLL(arr);
    Node* next=head->next;
    cout<<head->data<<" "<<next->data;
}

