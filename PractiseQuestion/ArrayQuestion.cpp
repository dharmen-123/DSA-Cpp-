// Ques . Sum of array that array input are taken by user ---->>
// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int A[n];
    // int sum = 0;
    // for(int i = 0; i<n;i++){
    //     cin>>A[i];
    //     sum += A[i];
    // }
    //  cout<<sum;

    // Ques.  find the largest number in the array ---->>
    //  for(int i = 0; i<n;i++){
    //      cin>>A[i];}

    // int Max = A[0];                             // you can also use INT_MIN  method for find maximum or INT_MAX for minimum = extreme high or extreme low value lekr chlo
    // for(int i = 0; i<n;i++){
    //         if(A[i]>Max)                        // and for smalllest reverse the sign = (A[i]<min)
    //         Max = A[i];

    // }
    //     cout<<Max<<endl;

    // Ques.  find the second largest number in the array ---->>
    //  for(int i = 0; i<n;i++){
    //      cin>>A[i];}

    // int Max = A[0];                             // you can also use INT_MIN  method for find maximum or INT_MAX for minimum = extreme high or extreme low value lekr chlo
    // for(int i = 0; i<n;i++){
    //         if(A[i]>Max)                        // and for smalllest reverse the sign = (A[i]<min)
    //         Max = A[i];

    // }
    //     cout<<Max<<endl;

    // cout<<"second-largest no."<<endl;
    //     int second = A[1];
    //     for(int i=0; i<n; i++){
    //         if(A[i]!=Max){
    //             second = max(second,A[i]);              // max() use , age A[i]!=max h to second me jakr jo second or A[i] m se bdi value hogi update krdo
    //         }
    //     }
    //     cout<<second;

    // or

    // for(int i = 0; i<n;i++){
    //     cin>>A[i];}

    // int Max = A[0];                             // you can also use INT_MIN  method for find maximum or INT_MAX for minimum = extreme high or extreme low value lekr chlo
    // for(int i = 0; i<n;i++){
    //         if(A[i]>Max)                        // and for smalllest reverse the sign = (A[i]<min)
    //         Max = A[i];

    // }
    //     cout<<"Largest element."<<endl;
    //     cout<<Max<<endl;

    // cout<<"second-largest no."<<endl;
    //     int second = A[1];
    //     for(int i=0; i<n; i++){
    //         if(second<A[i] && A[i]<Max){
    //             second = A[i];
    //         }
    //     }
    //     cout<<second;

    // Ques. W.A.P  to Reverse the array  ------->>>

    //  for(int i = 0; i<n;i++){
    //         cin>>A[i];}

    // by reverse the loop from n-1 to 0 ---->>
    // cout << "Reversed array: ";
    // for (int i = n-1; i >=0; i--) {  // Loop ko n-1 se 0 tak chalana hai
    //     cout << A[i] << " ";}

    // by swap method --->> test me isi se krna h
    //  for(int i = 0; i<n;i++){
    //              cin>>A[i];}
    //  int i =0,j=n-1;
    //  while(i<j){
    //      int temp = A[i];
    //      A[i] = A[j];
    //      A[j] = temp;
    //      i++;
    //      j--;
    //  }
    //  for(int i= 0; i<n;i++){
    //      cout<<A[i]<<" ";
    //  }

    // by reverse method ---->>
    // reverse(A, A + n);

    // cout << "Reversed array: ";
    // for (int i = 0; i < 4; i++) {
    //     cout << A[i] << " ";
    // }

    // Ques. W.A.P to count positive and negative number in given array by user ---->>
    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> A[i];
    // }

    // int positiveCount = 0, negativeCount = 0;

    // for (int i = 0; i < n; i++) {
    //     if (A[i] > 0) {
    //         positiveCount++;                            // Increase positive count
    //     } else if (A[i] < 0) {
    //         negativeCount++;                           // Increase negative count
    //     }
    // }

    // cout << "Total Positive Numbers: " << positiveCount << endl;
    // cout << "Total Negative Numbers: " << negativeCount << endl;

    // Ques. Sorting an array in ascending order---->>
    //  cout << "Enter elements: ";
    //  for (int i = 0; i < n; i++) {
    //      cin >> A[i];
    //  }

    // for(int i= 0; i<n;i++){
    //     for(int j=i+1; j<n;j++){
    //         if(A[i]>A[j]){
    //         int temp = A[i];
    //          A[i] = A[j];
    //         A[j] = temp;}
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     cout<< A[i]<<" ";
    // }

    // Ques. Sorting an array in descending order---->>
    //     cout << "Enter elements: ";
    //     for (int i = 0; i < n; i++) {
    //         cin >> A[i];
    //     }

    //    for(int i= 0; i<n;i++){
    //        for(int j=i+1; j<n;j++){
    //            if(A[i]<A[j]){
    //            int temp = A[i];
    //             A[i] = A[j];
    //            A[j] = temp;}
    //        }
    //    }
    //    for (int i = 0; i < n; i++) {
    //        cout<< A[i]<<" ";
    //    }

    // Ques. Given an array of length n , check target element is present or not in given array
    // Use Linear search = o(n)  rather than binary search(when array is sort) = log n---->>>
    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // int x;
    // cout << "Enter target element";
    // cin >> x;
    // int flag = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (A[i] == x)
    //     {   flag = 1;
    //         cout << x << "present " << endl;
    //         break;
    //     }
    // }

    // if(flag==0)
    // cout << x << " is not present in the array." << endl;

    // Ques. find duplicate values in an array   --->>
    //     cout << "Enter elements: ";
    //     for (int i = 0; i < n; i++) {
    //         cin >> A[i];
    //     }

    //     cout << "Duplicate elements: ";
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < i; j++) {
    //             if (A[i] == A[j]) {
    //                 cout << A[i] << " ";
    //                 break;
    //             }
    //         }
    //     }
    //     cout << endl;

    // //Removing duplicates from array and print
    // cout<<"After removing duplicates : ";
    //     for (int i = 0; i < n; i++) {
    //         int j;
    //         for (j = 0; j < i; j++) {
    //             if (A[i] == A[j]) {
    //                 break;                       //agr phle hi duplicate mil gya h to use break krdo
    //             }
    //         }
    //         if (j == i) {
    //             cout <<A[i] << " ";                   //and array ko print krdo
    //         }
    //     }
    //     cout << endl;

    // OR

    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // cout<<"After Removing duplicates element: " ;

    // for (int i = 0; i < n; i++)
    // {
    //     int p = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (A[i] == A[j])
    //         {
    //             p = 1;
    //         }
    //     }
    //     if (p == 0)
    //     {
    //         cout<< A[i] << " ";
    //     }
    // }

    // Ques. Compare two element of array are equal or not ----->>>
    //   int B[n];
    //   cout << "Enter elements of array 1: ";
    //       for (int i = 0; i < n; i++) {
    //           cin >> A[i];
    //       }
    //       cout << "Enter elements of array 2: ";
    //       for (int i = 0; i < n; i++) {
    //           cin >> B[i];
    //       }

    // // int flag = 0;
    //     for (int i = 0; i < n; i++) {
    //             //    flag = 1;
    //         if (A[i] != B[i]) {
    //             cout << "They are equal\n";
    //            return 0;                                 //  why use return 0 not break  //  break;  // Only exits the loop, not the program uske baad ye jo next cout h loop k bhar vo bhi chalega
    //         //    break;
    //         }
    //     }

    // // if(flag==0)
    //     cout<<"they are not equal";

    // Ques. W.A.P to find missing no. in the series  ---->>>
    // int A[n-1];                                               // Since one number is missing
    // cout << "Enter " << n-1 << " elements: ";

    // int sum = 0;
    // for (int i = 0; i < n-1; i++) {
    //     cin >> A[i];
    //     sum += A[i];
    // }

    // int total = n * (n + 1) / 2;                                         // Sum of first n natural numbers
    // cout << "Missing number: " << total - sum << endl;

    /*logic= Expected sum (1+2+3+4+5) = 15

             Actual sum (1+2+4+5) = 12

            Missing number = 15 - 12 = 3 */

    // OR

    //    cout << "Enter elements:";
    //      for (int i = 0; i < n; i++) {
    //          cin >> A[i];
    //      }
    //          for(int i = 1 ; i<A[n-1]; i++){
    //             int p =0;
    //             for(int j =0 ; j<n; j++){
    //                 if(i == A[j]){
    //                     p=1;break;
    //                 }
    //             }
    //             if(p==0){
    //                 cout<<i<<" ";
    //             }
    //          }

    // Q. Find Kth largest element in array
    // int temp;
    // cout<<"Enter the size of array: ";

    // for(int i = 0; i<n; i++){
    //     cin>>A[i];
    // }
    // for(int i = 0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(A[i]<A[j]){
    //             temp = A[i];
    //             A[i]=A[j];
    //             A[j]=temp;
    //         }
    //     }
    // }
    // cout<<endl;
    // int k;
    // cout<<"Enter the value of K: ";
    // cin>>k;
    // if(k<=n){
    //     cout<<k<<" largest element in array is: "<<A[k-1];
    // }
    // else{
    //     cout<<"invalid";
    // }

    // Q. find max product of two element of array.
    // int temp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }
    // int b = A[0];
    // int c;
    // for(int i = 0; i<n; i++){
    //     if(b<A[i]){
    //         c=b;
    //         b=A[i];
    //     }
    //     else if(A[i]<b && A[i]>c){
    //         c=A[i];
    //     }
    // }
    // cout<<endl;
    // cout<<"Max product of two elements of array is: "<<b*c;

    // OR          By product method of  A[n - 1] * A[n - 2]

    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }
    // int temp;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (A[i] > A[j])
    //         {
    //             temp = A[i];
    //             A[i] = A[j];
    //             A[j] = temp;
    //         }
    //     }
    // }
    // if (n >= 2) {
    //     cout << "(n - 1) * (n - 2) = " << A[n - 1] * A[n - 2] << endl;
    // } else {
    //     cout << "Not enough elements for (n - 1)*(n - 2)" << endl;
    // }

    // Ques. check frequency of a no. ki no. kitni baar aaya h --->>
    //    ---> by sorting method
    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // int temp;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (A[i] > A[j])
    //         {
    //             temp = A[i];
    //             A[i] = A[j];
    //             A[j] = temp;
    //         }
    //     }
    // }

    // // Count frequency after sorting
    // for (int i = 0; i < n;)
    // {
    //     int count = 1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (A[i] == A[j])
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }

    //     cout << A[i] << " appears " << count << " times" << endl;
    //     i += count;                 // se direct next new number pe jump kar jao.  eg. A = [1, 1, 1, 2, 2, 3] =>  i = i + 3 = 3
    // }

    // or
    // for(int i = 0; i<n; i++){
    //     cin>>A[i];
    // }
    // for(int i = 0; i<n; i++){
    //     int c = 1;  // Count of current number (A[i])
    //     int b = 0;  // Ye check karega kya ye number pehle aa chuka hai ya nahi
    //     for(int j = 0; j<i; j++){
    //         if(A[i]==A[j]){
    //             b++;
    //         }
    //     }

    //     for(int j=i+1; j<n; j++){
    //         if(A[i]==A[j]){
    //             c++;
    //         }
    //     }
    //     if(b==0){
    //         cout<<A[i]<<"-->"<<c<<endl;
    //     }}

    /* logic -------------------<>>>><><<<
            Input: 6
            A[] = [3, 1, 3, 2, 1, 1]

            Loop i = 0 → A[0] = 3
            → b = 0 (not repeated before), c = 2 → ✅ Print 3 --> 2

            Loop i = 1 → A[1] = 1
            → b = 0, c = 3 → ✅ Print 1 --> 3

            Loop i = 2 → A[2] = 3
            → b = 1 → ❌ Skip (already counted)

            Loop i = 3 → A[3] = 2
            → b = 0, c = 1 → ✅ Print 2 --> 1

            Loop i = 4 → A[4] = 1
            → b = 1 → ❌ Skip

            Loop i = 5 → A[5] = 1
            → b = 2 → ❌ Skip                  */

    // Ques. W.A.P to find two indices in an array whose elements sum up to a given target, whose array length is n:
    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> A[i];
    // }

    // int x;
    // cout << "Enter target element: ";
    // cin >> x;

    // int flag = 0;
    // int i, j;

    // for (i = 0; i < n; i++) {
    //     for (j = i + 1; j < n; j++) {
    //         if (A[i] + A[j] == x) {
    //             flag = 1;
    //             cout << "Indices: " << i << " and " << j << endl;
    //             cout << "Elements: " << A[i] << " and " << A[j] << endl;
    //             // break;    // Optional: break if only one pair needed
    //         }
    //     }

    // if(flag==1){
    //     break;     //if you want only one pair
    // }}

    // if (flag == 0) {
    //     cout << "1"<<" "<<"-1" << endl;
    // }

    //
    //  cout << "Enter elements: ";
    //     for (int i = 0; i < n; i++) {
    //         cin >> A[i];
    //     }

    //     int count = 0;
    //     for(int i =0; i<n;i++){
    //          if(A[i] == 0){
    //             count++;
    //     }
    //     else if(A[i] != 0){
    //         cout<<A[i]<<" ";
    //     }

    // }

    // for (int i = 0; i < count; i++){
    //     cout<<"0"<<" ";
    // }

    // W.A.P to print non-
    //  cout << "Enter elements: ";
    //     for (int i = 0; i < n; i++) {
    //         cin >> A[i];
    //     }

    // int index = 0;
    // for(int i =0;i<n;i++){
    //     if(A[i] != 0){
    //     A[index] =A[i];
    //     index++;
    // }
    // }

    // for(int i = index; i<n;i++){

    //     A[index]=0;index++;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<A[i]<<" ";
    // }

    // Ques. check duplicates or not n given array ---->>
    //   cout << "Enter elements: ";
    //      for (int i = 0; i < n; i++) {
    //          cin >> A[i];
    //      }
    //      int count = 0;
    //      for (int i = 0; i < n; i++){
    //          for(int j=i+1;j<n;j++){

    //         if(A[i]== A[j]){
    //             count++;
    //             break;
    //         }}
    //     }
    //     if(count>=2){
    //         cout<<"true";

    //     }
    //     else{
    //         cout<<"false";
    //     }

// Ques. check if any element is greater than n/2 return true , otherwise false ------------>>
    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // for ( int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {

    //         if (A[i] == A[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count > n / 2)
    //     {
    //         cout << "yes" << " ";
    //         cout << A[i];
    //         break;
    //     }
    // }

    
// Leetcode Ques. 238   
    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // for(int i=0; i<n;i++){
    //     int product =1;
    //     for(int j=0; j<n; j++){
    //        if(i!=j){
    //         product *= A[j];
    //        }
    //     }
    //     cout<<product<<" ";
    // }



//Leetcode Ques. 896

// cout << "Enter elements: ";
// for (int i = 0; i < n; i++) {
//     cin >> A[i];
// }

// int flag = 0;
// for (int i = 1; i < n; i++) {
//     if (A[i] <= A[i - 1]) {
//         flag = 1; }
//     else {
//         flag = 0;
//         break;
//     }
// }

// if (flag == 0) {
//     for (int i = 1; i < n; i++) {
//         if (A[i] >= A[i - 1]) {
//             flag = 2;
            
//         }
//         else {
//             flag = 0;
//             break;
//         }

//     }
// }

// if (flag == 1) {
//     cout << "Array is monotonically decreasing.\n";
// } else if (flag == 2) {
//     cout << "Array is monotonically increasing.\n";
// } else {
//     cout << "Array is neither increasing nor decreasing.\n ";
// }


//Leetcode Ques. 121
// int price[n];
// cout << "Enter elements: ";
// for (int i = 0; i < n; i++) {
//     cin >> price[i];
// }

//     int min_price = INT_MAX;
//     int max_profit = 0;

//     for (int i = 0; i < n; i++) {
//         if (price[i] < min_price) {
//             min_price = price[i];
//         } else if (price[i]>min_price) {
//             max_profit = price[i] - min_price;
//         }
//     }

//     cout << "Max profit " << max_profit << endl;

//Ques - find all index no. of target element   ------------>>>
// cout << "Enter elements: ";
// for (int i = 0; i < n; i++) {
//     cin >> A[i];
// }

// int x;
// int count = 0;
// cout<<"enter target element";
// cin>>x;

// for (int i = 0; i < n; i++) {
//     if(x==A[i]){
//         cout<<"target element found: "<<i<<endl;
//         count++;
//     }
// }

// if(count == 0){
//     cout<<"target not found";
// }


//Leetcode Ques. 34 ------>>

    // cout << "Enter elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> A[i];
    // }

    // int x;
    // cout << "Enter target element: ";
    // cin >> x;

    // int first = -1, last = -1;

    // for (int i = 0; i < n; i++) {
    //     if (A[i] == x) {
    //         if (first == -1) {
    //             first = i;  
    //         }
    //         last = i;       
    //     }
    // }

    // if (first == -1) {
    //     cout << "-1., -1" << endl;
    // } else {
    //     cout << "first index of target element: " << first << endl;
    //     cout << "Last index of target element: " << last << endl;
    // }


// or   = by reverse loop 

    //  cout << "Enter elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> A[i];
    // }

    // int x;
    // cout << "Enter target element: ";
    // cin >> x;
    // for (int i = 0; i < n; i++) {    // phle pure forward direction me check krega
    //         if(A[i] == x){
    //             cout<<i<<" ";
    //               break;
    //         }
    //     }
    //     for (int i = n-1; i >= 0; i--) {     // then pure backward direction me check krega
    //         if(A[i] == x){
    //             cout<<i;
    //             break;

    //         }
    //     }



//Leetcode Ques. 1534   - Good triplet counts 
// cout << "Enter elements: ";
// for (int i = 0; i < n; i++) {
//     cin >> A[i];
// }

// int a, b, c;
// cout<<"Enter values of a , b , c: "<<endl;
// cin >> a >> b >> c;
// int count = 0;

// for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//         for (int k = j + 1; k < n; k++) {
//             if (abs(A[i] - A[j]) <= a && abs(A[j] - A[k]) <= b && abs(A[i] - A[k]) <= c) {
//                 count++;
//             }
//         }
//     }

// }
// cout << "Number of good triplets: " << count << endl;


/* LOGIC of 1534 question of leetcode ---------------->>>

arr = [3, 0, 1, 1, 9, 7]
a = 7, b = 2, c = 3

✅ For example: (i=0, j=2, k=3)   => i<j<k = condition yaad rkhna y kuch v index n. ni lena

|arr[0] - arr[2]| = |3 - 1| = 2 <= 7 ✔

|arr[2] - arr[3]| = |1 - 1| = 0 <= 2 ✔

|arr[0] - arr[3]| = |3 - 1| = 2 <= 3 ✔
So this is a good triplet   ,output is 4 (means 4 combinations bne h )✅                               */
  

// Leetcode 167 
// cout << "Enter elements: ";
// for (int i = 0; i < n; i++) {
//     cin >> A[i];
// }

// int x;
// cout<<"enter target element";
// cin>>x;
// int i = 0 , j =n-1;
// while (i<j) {
//     int sum = A[i] + A[j];
//     if (sum == x) {
//            cout <<i+1<< j+1;   //jis index pr bhi vo do numbers h unse 1 ,1 increment hokr aaye
//            break;
//     } else if (sum < x) {
//         i++; 
//     } else {
//         j--;
//     }

// }

// Leetcode 1 (Two sum)
// cout << "Enter elements: ";
// for (int i = 0; i < n; i++) {
//     cin >> A[i];
// }
// int x;
// cout<<"enter target element";
// cin>>x;

// int c = 0 , b, i, j;
// for ( i = 0; i<n;i++){
//     for (j = i+1; j<n;j++){
//         if(A[i]+A[j] == x){
//             c = i;
//             b = j;
//             cout<<c<<" "<<b;
//         }
//     }
// }


// Leetcode 35
    // cout << "Enter elements in sorted order: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> A[i];
    // }

    // int x;
    // cout << "Enter target element: ";
    // cin >> x;

    // int pos = n; // default position: insert at end
    // for (int i = 0; i < n; i++) {
    //     if (A[i] >= x) {
    //         pos = i;
    //         break;
    //     }
    // }

    // cout << "Insert position: " << pos << endl;



// Leetcode 204 (count prime)    
    // class Solution {
    //     public:
    //         int countPrimes(int n) {
    //             if (n <= 2) return 0;  // No primes less than 2
        
    //             vector<bool> isPrime(n, true);  // Assume all numbers are prime
    //             isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime numbers
        
    //             for (int i = 2 ; i*i < n; ++i) {  // Only need to loop till sqrt(n)
    //                 if (isPrime[i]) {
    //                     for (int j = i * i; j < n; j += i) {  // Mark multiples as not prime
    //                         isPrime[j] = false;
    //                     }
    //                 }
    //             }
        
    //             // Count prime numbers
    //             int count = 0;
    //             for (int i = 2; i < n; ++i) {
    //                 if (isPrime[i]) {
    //                     count++;
    //                 }
    //             }
        
    //             return count;
    //         }
    //     };
        

// Leetcode 137      
    //  for(int i = 0; i<n; i++){
    //     cin>>A[i];
    // }
    // for(int i = 0; i <n; i++) {
    //     int count = 1;  // Count occurrences of A[i]
    //     int flag = 0;   // Check if A[i] has already been counted

    //     // Check if A[i] has already been counted
    //     for(int j = 0; j < i; j++) {
    //         if(A[i] == A[j]) {
    //             flag = 1;
    //             break;
    //         }
    //     }

    //     if(flag == 1) {
    //         continue; // Skip if A[i] has already been counted
    //     }

    //     // Count occurrences of A[i] in the rest of the array
    //     for(int j = i + 1; j <n; j++) {
    //         if(A[i] == A[j]) {
    //             count++;
    //         }
    //     }
    //     if(count != 3) {
    //         cout<<A[i];
    //     }
    // }

    
    return 0;
}