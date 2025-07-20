////// ################ Q.55  ################

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;     //answer k liye 2d array bnaya
        ans.push_back(intervals[0]);   //1st interval push kiye ans me 
        for(int i= 0; i<intervals.size(); i++){
            if(ans.back()[1]>= intervals[i][0]){    //1st interval ka 2nd element ko compare kiye h 2nd interval k 1st element se
                ans.back()[1]=max(intervals[i][1], ans.back()[1]);  // agr overlap krra h to 2nd interval ka 2nd element ans me aajayega or ye dono hat jayenge 3 and 2
            }
            else{
                ans.push_back(intervals[i]);   //otherwise nhi h to vhi rhne do jo interval ka pair h 
            }
        }
        return ans;
    }

int main(){
    
}