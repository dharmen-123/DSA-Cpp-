
//  ############## STRING QUESTIONS #######################

////// ############# Q.1 Reverse the String ###############

// #include<iostream>
// using namespace std;
// #include<string>
// #include<algorithm>

// int main(){
//   string s="Cybrom";
//   string s1;
//   for(int i=s.size()-1;i>=0;i--){
//           s1+=s[i];
//       }
//   cout<<s1;
// }

////// ############# Q.2 Anagram the String ###############

// #include<iostream>
// using namespace std;  
// #include<string>
// int main(){
//   string s1="listen";
//   string s2="silent";
//   if(s1.size()==s2.size()){
//   int a[26]={0};
//   for(int i=0;s1[i]!='\0';i++){
//       a[s1[i]-'a']++;
//   }
//   for(int i=0;s2[i]!='\0';i++){
//       a[s2[i]-'a']--;
//   }
//   bool t=true;
//   for(int i=0;i<26;i++){
//     if(a[i]!=0){
//        t=false;
//        break;
//     }
//     else{
//       t=true;
//     }
//   }
//   if(t){
//     cout<<"It is anagram";
//   }
//   else{
//     cout<<"It is not anagram";
//   }
// }
// else{
//     cout<<"It is not anagram string";
// }
// }


////// ############# Q.3 Replace each letter with next lette in String ###############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//      string s="cybrom";
//      cout<<"Before Replace :"<<s;
//      for(int i=0;i<s.size();i++){
//         s[i]=s[i]+1;
//      }
//      cout<<"\nAfter Replace :"<<s;
// }

////// ############ Q.4 Count the Vowel in String #########

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//    string s="smile";
//     int c=0;
//    for(int i=0;i<s.size();i++){
//       if(s[i]=='a'||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//           c++;
//       }
//    }

//    cout<<"Vowels :"<<c;
// }

////  ############ Q.5 Count the Number in String ################### 

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//      string s="w3source from 2008";
//      int sum=0,a;
//      for(int i=0;s[i]!='\0';i++){
//         // cout<<s[i]<<"\t";
//       if(isdigit(s[i])){
//          a=s[i]-'0';
//         sum=sum+a;
//       }
//      }
//      cout<<"The Sum of number in String :"<<sum;
// }

  //  ###################### Q.6 Check the string is pallindrome or not ####################

//  #include<iostream>
//  using namespace std;
//  #include<string>
//  #include<algorithm>
//  int main(){
//       string s1;
//       cout<<"Enter the string for check pallindrome:";
//       getline(cin,s1);
//       string s2=s1;     
//       int j=s1.size()-1;
// ////////      reverse(s1.begin(),s1.end());
//     for(int i=0;i<j;i++){
// 		char store=s1[i];
// 		s1[i]=s1[j];
// 		s1[j]=store;
// 		j--;
// 	}
//       if(s1==s2){
//        cout<<"True";
//       }
//       else{
//       cout<<"False";
//      }
// }
  
//  ################ Q.7 Add Dash Between Two odd number in String ##############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//   string s="1345789";
//   string s2;
//   for(int i=0;i<s.size();i++){
//       s2+=s[i];
//      if(s[i]%2!=0 && s[i+1]%2!=0){
//         s2+='-';
//      }
//   }
//   cout<<s2;
// }

//  ################ Q.8 Toggle cash String ##############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//     string a="Python";
//     string b;
//     for(int i=0;i<a.size();i++){
//           if(a[i]<98){
//             b+=a[i]+32;
//           } 
//           else{
//             b+=a[i]-32;
//           }
//     }
//      cout<<b;
//   }

//  ##########Q.9 Convert the First letter of Each Word in String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){

//     string s="cpp string exercies";
//     string b;
//     for(int i=0;i<s.size();i++){
//         if(i==0){
//           b+=s[i]-32;
//         } 
//        else if(s[i] == 32 ){
//            b+=32;
//           b+=s[i+1]-32; 
//           i++;     
//        }
//        else{
//           b+=s[i];
//        }    
//     }
//     cout<<b;
// }

//  ##########Q.9 Convert the First letter of Each Word in String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
    
//       string s1="cpp string exercises";
//       for(int i=0;i<s1.size();i++){
//            if(i==0){
//              s1[i]=s1[i]-32;
//            }
//            else if(s1[i]==' '){
//               s1[i+1]=s1[i+1]-32;
//            }
//       }
//       cout<<s1;
// }

//  ##########Q.10 Count the word in given String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//    string s="cpp is the world Fastest programming language";
//     int c=0;
//    for(int i=0;i<s.size();i++){
//       if(s[i]==' '){
//         c+=1;
//       }
//    }
//    c+=1;
//    cout<<"NUmber of words in string :"<<c;
// }

//  ########## Find the largest word in the given String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){

//     string s="Cpp is the world fastest programming language";
//     string b, str;
    
//     for(int i=0;i<s.size();i++){
//         if(s[i]!=' '){
//            b.push_back(s[i]);
//         }
//         else{
//             break;
//         }
//     }
//   cout<<"backup"<<endl;
//   for(int i=0;i<b.size();i++){
//     cout<<b[i];
//   } 
//   for(int i=0;i<s.size();i++){
//       if(s[i]!=' '){
//         str.push_back(s[i]);
//         if(i+1==s.size() && str.size()>b.size()){ 
//             b=str;
//         }
//       }
//       else{
//           if(str.size()>b.size()){
//             b=str;
//           }
//           str.clear();
//       }
//   }
    
//   cout<<"\nFinal Output :"<<b;
// //   cout<<s.size();
    
// }

////  ################### Isomorphic String ###########################
// #include<iostream>
// using namespace std;
// #include<string>
// bool isomorphic(string s, string t){
//    int n1[256]={-1};
//     int n2[256]={-1};

//     if(s.size()!=t.size()){
//       return false;
//     }
//     else{
//       for(int i=0;i<s.size();i++){
//          if(n1[s[i]]!=n2[t[i]]){
//             return false;
//             break;
//          }
//       }
//       return true;
//     }
// }
// int main(){

//     string s="add",t="zoo";
//     bool c=isomorphic(s,t);
//     if (c){
//       cout<<"Isomorphic";
//     }
//     else{
//       cout<<"NOT Isomorphic";
//     }
// }



// #include<iostream>
// #include <climits> 
// using namespace std;
// int reverse(int x){
//         long sum=0;
//         bool c=false;
//          if(x<0){
//           c=true;  
//           x=-x;
//         }
//         while(x>0){
//         int y=x%10;
//             sum=sum*10+y;
//             x=x/10;   
//         }
//         if(c){
//             sum=-sum;
//         }
//         return sum;
// }
// int main(){
//   cout<<reverse(1534236469);   
// }


// #include<iostream>
// using namespace std;
// #include<bits/stdc++.h>

// string largestNumber(vector<int>& nums) {
//            vector<string>s;
//            for(int i=0;i<nums.size();i++){
//               s.push_back(to_string(nums[i]));
//            }
//            sort(s.begin(),s.end(),greater<int>());
//            string r;
//            for(auto x:s){
//                r+=x;
//            }
//        return r;
//     }
// int main(){
    
// vector<int>nums{3,30,34,5,9};
//   cout<<"Output is :";
//   cout<<largestNumber(nums);
// }

// // ######################### Q.   ###########################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     string orderlyQueue(string s, int k) {
//        queue<char>q;
//       int n=s.size();
//       for(int i=0;i<n;i++){
//         q.push(s[i]);
//       }
//       q.push('A');
//     // while (!q.empty())
//     // {
//     //   cout<<q.front();
//     //   q.pop();
//     // }
//     cout<<"\n";
//         return "a" ;
//     }

// int main(){
//   string s = "cba";
//   int k = 1;
//    cout<<orderlyQueue(s,k);
// }

/// ###################### Q.13 ############################

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int romanToInt(string s) {
//         unordered_map<char, int>mp{
//           {'I', 1},
//           {'V', 5},
//           {'X', 10},
//           {'L', 50},
//           {'C', 100},
//           {'D', 500},
//           {'M', 1000}
//         };
// // I can be placed before V (5) and X (10) to make 4 and 9. 
// // X can be placed before L (50) and C (100) to make 40 and 90. 
// // C can be placed before D (500) and M (1000) to make 400 and 900.
//         int sum=0;
//         for(int i=0;i<s.size();i++){
//           if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
//             sum=sum+(mp[s[i+1]]-mp[s[i]]);
//             i++;
//           }
//           else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
//             sum=sum+(mp[s[i+1]]-mp[s[i]]);
//             i++;
//           }
//           else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
//             sum=sum+(mp[s[i+1]]-mp[s[i]]);
//             i++;
//           }
//           else{
//           sum=sum+mp[s[i]];
//         }
//       }
//        // ################ 2nd way ##############
//         //      for (int i = 0; i < s.size(); ++i) {
//         //     if (i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]]) {
//         //         sum += mp[s[i + 1]] - mp[s[i]];
//         //         ++i;
//         //     } else {
//         //         sum += mp[s[i]];
//         //     }
//         // }

//      return sum;
// }
// int main(){
//       //  string s="LVIII";
//        string s="MCMXCIV";
//        cout<<romanToInt(s);
// }