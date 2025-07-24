////// ################ Q.55  ################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end());
//         vector<vector<int>> ans;     //answer k liye 2d array bnaya
//         ans.push_back(intervals[0]);   //1st interval push kiye ans me 
//         for(int i= 0; i<intervals.size(); i++){
//             if(ans.back()[1]>= intervals[i][0]){    //1st interval ka 2nd element ko compare kiye h 2nd interval k 1st element se
//                 ans.back()[1]=max(intervals[i][1], ans.back()[1]);  // agr overlap krra h to 2nd interval ka 2nd element ans me aajayega or ye dono hat jayenge 3 and 2
//             }
//             else{
//                 ans.push_back(intervals[i]);   //otherwise nhi h to vhi rhne do jo interval ka pair h 
//             }
//         }
//         return ans;
//     }

// int main(){
    
// }


 //// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly. 

  // #include<iostream>
  // #include<bits/stdc++.h>
  // using namespace std;
  // vector<int> MaxMinvalue(vector<int> & arr){
  //        sort(arr.begin(),arr.end());
  //        int min=0,max=0 ;
  //        int n=arr.size();
  //        if(n<4)
  //            return arr;
  //        for(int i=0;i<4;i++){
  //           min+=arr[i];
  //        }
  //        reverse(arr.begin(),arr.end());
  //       for(int i=0;i<4;i++){
  //           max+=arr[i];
  //        }
  //        cout<<"Maximum value: "<<max<<endl;
  //        cout<<"Minimum value: "<<min<<endl;

  // }    
  // int main(){
  //      vector<int>arr{4,6,2,3,5};
  //      MaxMinvalue(arr);
  //     }

 // // // ########### NUmber of ways to get target amount #############
// #include <iostream>
// #include <vector>
// using namespace std;

// int countCombinations(vector<int>& coins, int target) {
//     vector<int> dp(target + 1, 0);
//     dp[0] = 1;  

//     for (int coin : coins) {
//         for (int amt = coin; amt <= target; ++amt) {
//             dp[amt] += dp[amt - coin];
//         }
//     }
//      for(auto d:dp){
//       cout<<d<<" ";
//     }
//     return dp[coins.size()-1];
// }

// int main() {
//     vector<int> coins = {1, 5, 6, 4,3,2};
//     int target = 9;
//     cout << "Total combinations: " << countCombinations(coins, target) << endl;
//     return 0;
// }

  // ################# Split an array into two equal Sum subarrays  ########## 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Split(vector<int>& arr){
    vector<int>v;
    vector<vector<int>>mp;
      int sum=0,p;
      for(auto a:arr){
        sum+=a;
      }
      p=sum/2;
      if(p%2==0){
           sum=0;
         for(int i=0;i<=arr.size();i++){
             if(sum!=p){
                sum+=arr[i];
                v.push_back(arr[i]);
            } else{
                mp.push_back(v);
                v.clear();
                sum=0;
                i--;
            }
        }
        return mp;
      }
      else{
        cout<<"Not Possible";
      }

}
int main(){
   vector<int>arr{1 , 2 , 3 , 4 , 5 , 5 };
   vector<vector<int>>result = Split(arr);
   for(auto r:result){
    for(auto col:r){
        cout<<col<<" ";
    }
    cout<<endl;
   }
}