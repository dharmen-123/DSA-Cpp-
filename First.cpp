// #include"iostream"
// using namespace std;
// int main(){
//     cout<<"hello Cpp";
//     cout<<"Data Structure And Algorithm";
// }
  
   ////// Faactorial of number using function

// #include<iostream>
// using namespace std;
// void fact(int n){
//     int fact=1;
//     for(int i=n;i>=1;i--){
//         fact=fact*i;
//     }
//     cout<<"The factorial is :"<<fact;
// }
// int main(){
//    int n;
//    cout<<"Enter the number for factorial :";
//    cin>>n;
//    fact(n);
// }


                    ///// Arrange the array in asscending order 
              
#include <iostream>
using namespace std;
void Acending(int arr[] , int n){
      
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    Acending(arr , n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


                  /// Lear year  number define

// #include<iostream>
// using namespace std;
// void Lear_year(int a){

//       if((a%4==0 && a%100!=0) || (a%100!=0 && a%400==0)){
//          cout<<"It is Leap year";
//       }
//       else cout<<"not";
    
// }

// int main(){
//     int year;
//     cout<<"Enter the year for check :";
//     cin>>year;
//     Lear_year(year);
// }