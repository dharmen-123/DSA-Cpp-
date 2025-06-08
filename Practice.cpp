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

#include<iostream>
using namespace std;
void Insertion(int arr[], int s){
  
      for(int i=1;i<s;i++){
          int min=i;

          while(min>0 && arr[min]<arr[min-1]){
               int swp = arr[min];
               arr[min]=arr[min-1];
               arr[min-1]=swp;
          }


      }
    
}
int main(){
    int arr[]={4,2,5,6,8};
    int s=sizeof(arr)/sizeof(arr[2]);
    Insertion(arr, s);
    for(int i=0;i<s;i++){
      cout<<arr[i]<<"\t";
    }
}