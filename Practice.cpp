// #include<iostream>
// using namespace std;
// void bubble(int arr[],int s)
// {
//     int temp,c=0;
//     bool d;
//     for (int i=0;i<s;i++)
//     {
//         d=false;
//         for (int j=0;j<s-i-1;j++)
//         {
//             c++;
//             if(arr[j]>arr[j+1])
//             {
//                 temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//                 d=true;
//             }        
//         } 
//         if (d==false){
//             break;
//         }
//     }
//     cout<<"counter hit "<<c<<endl;
// }
// int main()
// {
//     int arr[6]={1,2,3,4,5,6};
//     bubble (arr,6);
//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }


// ################## BUBBLE SORT ############################

// #include<iostream>
// using namespace std;
// void Bubble(int arr[], int s){
// int swp, c=0;  
// bool a;   
//     for(int i=0;i<s;i++){
//         a=false;
//         for(int j=0;j<s-i-1;j++){
//             c++;
//             if(arr[j]>arr[j+1]){
//             swp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=swp;  
//            a=true;
//         }  
//       }   
//       if (a==false){
//         break;
//       }
//     }
//     cout<<"Number of Hits : "<<c<<"\n";

// }
// int main(){
//     int arr[]={5,4,1,2,3};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     Bubble(arr,s);
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

// ############### Insertion Sort #################### 

// #include<iostream>
// using namespace std;
// void Insertion(int arr[], int s){
//  int c=0; 
//       for(int i=1;i<s;i++){
//           int min=i;

//           while(min>0 && arr[min]<arr[min-1]){
//             c++;
//             int swp = arr[min];
//                arr[min]=arr[min-1];
//                arr[min-1]=swp;
//                min--;
//           }
//       }
//       cout<<"no. hits :"<<c<<"\n";
    
// }
// int main(){
//     int arr[]={3,4,1,2,5,6};
//     int s=sizeof(arr)/sizeof(arr[2]);
//     Insertion(arr, s);
//     for(int i=0;i<s;i++){
//       cout<<arr[i]<<"\t";
//     }
// }

// ################### Selection Sort ##################### 

// #include<iostream>
// using namespace std;
// void Selection(int arr[], int s){
  
//      for(int i=0;i<s-1; i++){
      
//       int min =i;   

//         for(int j=i+1;j<s;j++){

//            if(arr[j]<arr[min]){
//                 min=j;
//               }
//       }
//        if(min!=i){
//             swap(arr[min], arr[i]);
//        }
//      }
// }

// int main(){
//     int arr[]={5,4,3,2,1};
//     int s=sizeof(arr)/sizeof(arr[2]);
//     Selection(arr, s);
//     for(int i=0;i<s;i++){
//       cout<<arr[i]<<"\t";
//     }
// }

// #include<iostream>
// using namespace std;
// void Bubble(int arr[], int s){
// int swp;
// int c=0;
// bool b;
//       for(int i=0;i<s;i++){
//       b=false;
//        for(int j=0;j<s-i-1;j++){
//         c++;
//         if(arr[j]>arr[j+1]){
//              swp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=swp;   
//              b=true;    
//           }
//       } 
//       if(b==false){
//         break;
//       }
//       }
//       cout<<"Hits: "<<c<<"\n";
//     }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int s=sizeof(arr)/sizeof(arr[2]);
//     Bubble(arr, s);
//     for(int i=0;i<s;i++){
//       cout<<arr[i]<<"\t";
//     }
// }


// #include<iostream>
// using namespace std;
// void Selection(int arr[], int s){
//    int min;
//     for(int i=0;i<s-1;i++){
//        min=i;
//        for(int j=i+1;j<s;j++){
//            if(arr[j]<arr[min]){
//                min=j;
//            }
//        }
//     if(min!=i){
//         int swp=arr[min];
//         arr[min]=arr[i];
//         arr[i]=swp;
//     }
//     }
// }

// int main(){
//        int arr[]={5,4,3,2,1};
//     int s=sizeof(arr)/sizeof(arr[2]);
//     Selection(arr, s);
//     for(int i=0;i<s;i++){
//       cout<<arr[i]<<"\t";
//     }
// }


// #include<iostream>
// using namespace std;
// void Insertion(int arr[], int s){
// int min;
//    for(int i=1;i<s; i++){
//     min=i;

//       while(min>0  && arr[min]<arr[min-1] ){
//          int swp=arr[min];
//          arr[min]=arr[min-1];
//          arr[min-1]=swp;
//          min--;
//       }

//    }

// }
// int main(){
//        int arr[]={4,8,2,4,7};
//     int s=sizeof(arr)/sizeof(arr[2]);
//     Insertion(arr, s);
//     for(int i=0;i<s;i++){
//       cout<<arr[i]<<"\t";
//     }
// }


//  ################# merge Sort ##################### 
// #include<iostream>
// using namespace std;
// void MERGE(int arr[], int low , int mid, int high){
//     int b[high+1];
//     int i=low;
//     int j=mid+1;
//     int k=low;
//     while(i<=mid && j<=high){
//         if(arr[i]<arr[j]){
//             b[k]=arr[i];
//             i++;
//         }
//         else{
//             b[k]=arr[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<=mid){
//         b[k]=arr[i];
//         i++;
//         k++;
//     }
//     while(j<=high){
//         b[k]=arr[j];
//         j++;
//         k++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=b[i];
//     }
// }
// void MSort(int arr[], int low , int high){
//     int mid;
//     if(low<high){
//         mid=(low+high)/2;
//         MSort(arr, low, mid);
//         MSort(arr, mid+1, high);
//         MERGE(arr, low , mid , high);
//     }
// }

// int main(){
//      int arr[]={4,8,2,6,7};
//     int s=sizeof(arr)/sizeof(arr[2]);
//     MSort(arr, 0, s-1);
//     for(int i=0;i<s;i++){
//       cout<<arr[i]<<"\t";
//     }
// }

// ############## Recursion ##################

// #include<iostream>
// using namespace std;
// void Power(int b, int p){
//     if(b==0){
//         return 1;
//     }
//     if(p==0){


//     }
// int main(){
    
// }
// }

 //// // ###### Q. 75 ###########

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     void sortColors(vector<int>& nums) {
//         // sort(nums.begin(),nums.end());
//         int low=0, mid=0 ;
//         int high=nums.size()-1;
//         while(mid<=high){
//             if(nums[mid]==0){
//                 swap(nums[mid],nums[low]);
//                 low++;  mid++;
//             }
//             else if(nums[mid]==1){
//                 mid++;
//             }
//             else{
//                 swap(nums[mid],nums[high]);
//                 high--;
//             }
//         }
//         for(auto a:nums){
//             cout<<a<<" ";
//         }

//     }
// int main(){
//     vector<int>nums{1,2,0};
//     sortColors(nums);
// }

//    question Pending ? 





