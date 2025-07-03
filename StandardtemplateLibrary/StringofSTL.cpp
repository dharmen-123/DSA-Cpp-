// ######## STRING TEMPLATE CLASS ############

// String is a class not data type
// Algo is always is apply in class

// char is terminate after space 
// char take 1 byte space 
// string by default take 32 byte 

// getline function is used to take strig as a input with space 
// It take two parameter first in object and second is variable 


// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//     string a;
//     cout<<"Enter your name :\n";
//     getline(cin,a);
//     cout<<"Name is :"<<a;
     
// }

// #####################

// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<string>
// int main(){
  
//     string a(5,'hello');
//     cout<<a;

//     string j="17429475";
//     sort(j.begin(),j.end(),greater<int>());
//     cout<<j;
// }

// In sort function there are two pointer begin() and end()
// begin take the starting point and end take the last point 
// Sort function take three parameter 
// starting point , end point , operation perform 
// string has the resize function it shrik the size of string
// resize function does not expand the size 

// size function give the actual size of data 
// sizeof() function it give the byte of data 

// find() function return the indexing of value 

// example : s="Bhopal";
//     s.find("op");
// j="345345"
// back() function It return the last value of string 
// s.back()
// front() function It return the first value of string 
// s.front()
// + Operator concatenate the two string 

// append() function it add the next data in first 
// j.append(s) 

// insert() function it add the string at th specific position
// j.insert(2,'hello')

// erase() function it delete the specific number of character from the given indexing 
// j.erase(2,3)

//  ############## STRING QUESTIONS #######################

////// ############# Q.1 Reverse the String ###############

// #include<iostream>
// using namespace std;
// #include<string>
// #include<algorithm>

// int main(){

//   string s="Cybrom";
//   string s1;
//   // reverse(s.begin(),s.end());
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

// #include<iostream>
// using namespace std;
// #include<string>
// #include<algorithm>
// int main(){

//      string s1;
//      cout<<"Enter the string for check pallindrome:";
//      getline(cin,s1);
//      string s2=s1;
//      reverse(s1.begin(),s1.end());
//      if(s1==s2){
//       cout<<"True";
//      }
//      else{
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


#include<iostream>
using namespace std;
#include<string>
int main(){

    string s="cpp string exercies";
    string b;
    for(int i=0;i<s.size();i++){
        if(i==0){
          b+=s[i]-32;
        } 
       else if(s[i] == 32 ){
          b+=s[i+1]-32;      
       }
       else{
         b+=s[i];
       }    
    }
    cout<<b;
}





