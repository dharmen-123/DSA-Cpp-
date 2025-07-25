 // // // ############### Q.GFG 1  ######################

//  #include<iostream>
//  #include<bits/stdc++.h>
//  using namespace std;
// vector<int> subarraySum(vector<int> &arr, int target) {
//       int sum=0 ,a=0;
//       vector<int>v;
//     for(int i=0;i<arr.size()-1;i++){
//         sum=0;
//         int j=i+1;
//         sum=sum+arr[i];
//         if(arr[i]==target){
//          v.push_back(i+1);
//          v.push_back(i+1);
//          break;
//         }else{
//         while(j<arr.size()){
//             if(sum<target){
//             sum =sum+arr[j];
//              a=j;
//             }
//             j++;
//         }
//         if(sum==target){
//             // cout<<sum;
//             v.push_back(i+1);
//             v.push_back(a+1);
//             break;
//         }
//     }
//     }
//     if(sum!=target){
//      v.push_back(-1);
//     }
//     for(auto a:v){
//         cout<<a<<" ";
//     }
//     return v;
         
// } 
//  int main(){
//     vector<int>arr{19, 23 ,15 ,6, 6, 2, 28, 2}; 
//     int target = 2;
//      subarraySum(arr, target);
//  }


// // // ######### GFG  Anagram ##############

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     bool areAnagrams(string& s1, string& s2) {
//         cout<<s1.length()<<endl;
//         cout<<s2.length()<<endl;
//         if(s1.length()!=s2.length())
//              return false;
//         int c[26]={0};
//         for(int i=0;s1[i]!='\0';i++){
//             c[s1[i]-'a']+=1;
//         }
//         for(int j=0;s2[j]!='\0';j++){
//             c[s2[j]-'a']-=1;
//         }
//         for(int k=0;k<26;k++){
//              if(c[k]!=0)
//                   return false;
//         }
//        return true;  
//     }
// int main(){
//    string s1 = "geeks", s2 = "kseeg";
//    cout<<areAnagrams(s1,s2);
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    string reverseWords(string &s) {
        stack<string>st;
        string w="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                w+=s[i];
                if(i==s.length()-1 && s[i]!='.'){
                   st.push(w);
                   w.clear();
                }
            }
            else if(i==0 && s[i]=='.'){
                    
            }
            else{
                st.push(w);
                st.push(".");
                if(i==s.length()-1 && s[i]=='.'){
                       st.pop();
                }
                w.clear();
            }
        }  
        while (!st.empty()){
            w+=st.top();
            st.pop();
        }   
     return w;
    }

int main(){
      string s=".i.like.this.program.very.much.";
     cout<<reverseWords(s);
}
