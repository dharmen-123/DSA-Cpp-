include<iostream>
#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
   int a = 0;
    int sign = 1;
    bool started = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-' && !started) {
            sign = -1;
            started = true;
        } else if (isdigit(s[i])) {
            a = a * 10 + (s[i] - '0');
            started = true;
        } else if (started) {
            break; 
        }
         else if(s[i] == ' '){
            continue;
         }
        else{
            return 0;
        }
    }
    return a * sign;
}
int main(){
    string s="  -042";
    cout<<myAtoi(s);
}