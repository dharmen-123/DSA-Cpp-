 ////################# Lambda function ######################

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
 
// int main(){
//     vector<int> v{5,4,3,6,7,8};
//     cout<<"\nLambda"<<endl;
//     cout<<[](int a,int b){return a>b;}(5,40);

//     //  lis.remove_if([](int a,int b){return a>b;}(5,40));
//     // Lambda function (anonimas)  it's the single line functions 
//     // [] in front


//     // whene we want to clall a lambda funtion it's need to be called with (auto) and inside of () all parameters are needed to be passed.
//     cout<<"\n Pointer Function"<<endl;

//     auto p=[](int a,int b){return a>b;};
//     // cout<<p(90,80);

//     sort(v.begin(),v.end(),less<int>());
//     // sort(v.begin(),v.end(),greater<int>());
//     // sort(v.begin(),v.end(),[](int a,int b){return a>b;});

//     for(auto p:v)
//     {
//         cout<<p<<" ";
//     }
//     return 0;
// }


// lambda function--it is called single line fuction



// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<[](int a , int b){return a>b;} (4,20);
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     auto p=[] (int a ,int b){return a>b ;};
//     cout<<p(7 , 8);
// }




// #include <iostream>
// using namespace std;
// int main()
// {
//     vastor <int>v{4,2,8,9,5};
//     sort(v.begin(),v.end(), [] (int a, int b) {return a>b;})
//     for (auto p:v)
//     {
//         cout<<p<<"\t";
//     }
// }



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>l1{20,5,3,19,7};
   l1.remove(3);
   for(auto x:l1){
    cout<<x<<" ";
   }
   cout<< "\n";
   l1.remove_if([](int a){return a>7;});
      for(auto x:l1){
    cout<<x<<" ";
   }
   
}