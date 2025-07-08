// // // // //  ############# ARRRAY QUESTIIONS #####################

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{

//    find volume of cynlinder---->

    //   float r, h;
    //   float pi = 3.14;

    //   cout<<"Enter radius and height of cylinder";
    //   cin>>r>>h;
    //   // float volume = 3.14*r*r*h;
    //   float volume = 3.14*pow(r,2)*h;
    //   cout<<volume;

   // find distance between two points using sqrt and pow function------>

   // float x1,x2,y1,y2;
   // cout<<"enter values";
   // cin>>x1>>x2>>y1>>y2;
   // float distance= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   // cout<<distance;
   //    return 0;





   // Write a C++ program that simulates an ATM withdrawal system---------->>
   // A person tries to withdraw money from an ATM.Check 
//    if the withdrawal amount is a multiple of 100 and account balance is sufficient.
//If both conditions are met, approve the withdrawal and also calculate the remaining balance
// Otherwise, reject it with an appropriate message.

   // int balance;
   // cout<<"Enter balance";
   // cin>>balance;

   // int withdrawamount;
   // cout<<"Enter withdrawamount";
   // cin>>withdrawamount;

   // if((withdrawamount%100==0) && (withdrawamount<=balance)){
   //    cout<<"your transaction is successful"<<endl;

   //    balance -= withdrawamount;  // Update balance
   //    cout << "Remaining balance: " << balance << endl;

   // }
   // else
   //  cout<<"your transaction is rejected";




//  A university provides scholarships based on marks and attendance.If marks >= 90 and attendance >= 75%, 
//student gets 100% scholarship.If marks >= 80 and attendance >= 60%, student gets 50% scholarship.
//Otherwise, no scholarship.
   
   // int marks;
   // float attendance; // Assuming attendance is given as a percentage

   // cout << "Enter marks and attendance percentage of the student: ";
   // cin >> marks >> attendance;

   // if (marks >= 90 && attendance >= 75)
   // {
   //    cout << "Student gets 100% scholarship" << endl;
   // }
   // else if (marks >= 80 && attendance >= 60)
   // {
   //    cout << "Student gets 50% scholarship" << endl;
   // }
   // else
   // {
   //    cout << "No scholarship" << endl;
   // }



/*  Write a C++ program that takes a single-digit number (0-9) as input and prints its word representation using switch-case.
   Enter a number: 5     output - Five    */


   // int num;

   // cout << "Enter a number (0-9): ";
   // cin >> num;

   // switch (num) {
   //     case 0: cout << "Zero"; break;
   //     case 1: cout << "One"; break;
   //     case 2: cout << "Two"; break;
   //     case 3: cout << "Three"; break;
   //     case 4: cout << "Four"; break;
   //     case 5: cout << "Five"; break;
   //     case 6: cout << "Six"; break;
   //     case 7: cout << "Seven"; break;
   //     case 8: cout << "Eight"; break;
   //     case 9: cout << "Nine"; break;
   //     default: cout << "Invalid input! Please enter a single-digit number (0-9).";
   // }


/*A flight ticket price is ₹5000. Discounts are given as follows: Children(age ≤ 12) → 50% discount.Senior Citizens (age ≥ 60) →  30% discount . Early booking (before 30 days) → Additional 10% discount.
Calculate the final price of the ticket.*/
 
      //  int flight_price = 5000;
      //  int final_price, discount = 0;     // agar user ka input aisa ho jo kisi discount condition me nahi aata (jaise koi adult jo early booking bhi nahi karta), toh discount ki value undefined hogi, aur tumhe koi random value mil sakti hai.
      //  int age, days_before_travel;
   
      //  cout << "Enter age and days before travel: ";
      //  cin >> age >> days_before_travel;
   
      //  // Age-based discount
      //  if (age <= 12) {
      //      discount = flight_price * (50.0 / 100);  
      //      cout << "Age Discount: " << discount << endl;
      //  } 
      //  else if (age >= 60) {  
      //      discount = flight_price * (30.0 / 100);
      //      cout << "Age Discount: " << discount << endl;
      //  }
   
      //  // Early booking discount
      //  if (days_before_travel > 30) {
      //      discount += flight_price * (10.0 / 100);  
      //      cout << "After Early Booking Discount: " << discount << endl;
      //  }
   
      //  final_price = flight_price - discount;  
      //  cout << "Final Ticket Price : " << final_price << endl;


/*A company gives bonuses to employees based on their experience and performance rating:If an employee has 5+ years of experience and a performance rating of >=4, they get a 20% bonus.If they have 3-5 years of experience and a performance rating of >=3, they get a 10% bonus.Otherwise, no bonus.
      Calculate the bonus and total salary.*/
      
      // int salary ,Total_salary;
      // cout<<"Enter salary of employee";
      // cin>>salary;

      // int exp,performance;
      // cout<<" enter exp and performance";
      // cin>>exp>>performance;

      // float bonus = 0;

      // if(exp>5 && performance>=4){
      //    bonus = salary*(20.0/100);       // Why use floating point division => when you divide two integers (int / int), the result is also an integer ==> 20/100 = 0 not store 0.2(becuase it is flost value)
      //    cout<<bonus<<endl;
      // }
   
      // else if(3>=exp && exp<=5 && performance>=3){
      //    bonus = salary*(10.0/100);
      //    cout<<bonus<<endl;
      // }
      // else
      // cout<<"No bonus"<<endl;

      // Total_salary = salary + bonus;
      // cout<<"Total salary after bonus" <<Total_salary<<endl;



//print digit from left to right one by one------------------->>>      
    //   int num, digit;
    //   cout<<"Enter number";
    //   cin>>num;

    //   while(num>0){
    //      digit = num%10;
    //      num = num/10;
    //      cout<<"digit are: "<<digit<<endl;
    //   }

  // OR  

//print sum of digits      
      // int num, digit,sum=0;
      // cout<<"Enter number";
      // cin>>num;


      // while(num>0){
      //    digit = num%10;
      //    sum = sum+digit;                   //sum = 0+digit
      //    num = num/10;                     // or phir last digit ko remove kr dena by help of divide kyonki divide jo h vo float and decimal value ko remove kr deta h 
      //    cout<<"digit are: "<<digit<<endl;
         
      // }
      //    cout<<sum;

// find all the numbes that is divisible by 3 and 5 both no. between range a and b ----->>>   
      // int a, b;
      // cin >> a >> b;
  
      // for (int j = a; j <= b; j++) {
      //     if (j % 3 == 0 && j % 5 == 0) {
      //         cout << j << " ";
      //     }
      // }


// Implement a program to reverse no.----->>    

      // int n;
      // cin >> n;
  
      // int reversed = 0;
  
      // while (n > 0) {
      //     int digit = n % 10;          
      
      //     reversed = reversed * 10 + digit; 
      //     n = n / 10;                 
      // }
  
      // cout << "Reversed number: " << reversed << endl;



//print armstrong no. or not ----------------->>>>     

    // int num, sum = 0, temp, count = 0;

    // cout << "Enter a number: ";
    // cin >> num;
    
    // temp = num;

   
    // while (temp > 0) {
    //     count++;                                            // Count digits = ki kitne digit ka no. h for further calculation
    //     temp /=10;
    // }

    // temp = num;
    // while (temp > 0) {
    //     int r = temp % 10;
    //     sum += pow(r, count);
       
    //     temp /= 10;
    // }
   

    // if (sum == num){
    //     cout << num << " Yes ";}
    // else
    //     cout << num << " No ";





// Q1.
// int a ,b, lcm;
// cin>>a>>b;

//     // Start from the greater of the two numbers
//     int max_num = (a > b) ? a : b;

//     // Loop to find LCM
//     for (int i = max_num; i <= a * b; i++) {
//         if (i % a == 0 && i % b == 0) {
//             lcm = i;
//             break;
//         }
//     }

//     cout << "LCM of " << a << " and " << b << " is " << lcm << endl;


// Q2.

    // int a ,b, hcf;
    // cin>>a>>b;

    // // Find the smaller number
    // int min_num = (a < b) ? a : b;

    // // Loop to find HCF
    // for (int i = 1; i <= min_num; i++) {
    //     if (a % i == 0 && b % i == 0) {
    //         hcf = i;
    //     }
    // }

    // cout << "HCF of " << a << " and " << b << " is " << hcf << endl;


// Q3.
//  int n;
// cout << "Enter number of terms: ";
// cin >> n;

// int a = 0, b = 1;

// cout << "Fibonacci Series: ";

// for (int i = 1; i <= n; i++) {
//     cout << a << " ";
//     int next = a + b;
//     a = b;
//     b = next;
// }

// Q4.
// int num,sum=0;
//     cout << "Enter a number: ";
//     cin >> num;

//     int originalNum = num; 

//     while (num > 0) {
//        int digit = num % 10;
//         int factorial = 1;
//         for (int i = 1; i <= digit; i++) {
//             factorial *= i;
//         }
         
      
//         sum += factorial;
//         num /= 10;
//     }
//     if (sum == originalNum) {
//         cout << originalNum << " is a Strong Number." << endl;
//     } else {
//         cout << originalNum << " is not a Strong Number." << endl;
//     }

// Q5.
// int a;
// cin >> a;

// while (a >= 10) {
//     int b = 0;
//     while (a > 0) {
//       int digit = a%10;
//         b += digit;
//         a = a / 10;
//     }
//     a = b;
// }

// cout << a;


// Q6.
// int n;
// cin>>n;
// double b=0, c=0;

// for(int i=1; i<=n; i++){
//     double distance, fuel;
//     cout<<"Enter Distance traveled and fuel used "<<i<<": ";
//     cin>>distance>>fuel;

//     b=b+distance;
//     c=c+fuel;
// }

// if(b==0){
//     cout<<"furl usage can't be zero."<<endl;
// }
// else{
//     double milege = b/c;
//     cout<<fixed<<setprecision(2);
//     cout<<"Avg. Milege: "<<milege<<" km/l"<<endl;
// }

// Q8.
    // int a, b;
    // cin >> a >> b;

    // for (int j = a; j <= b; j++) {

    //     int count = 0;
    //     for (int i = 1; i <= j; i++) {
    //         if (j % i== 0) {
    //             count++;                                              // Count how many times j is divisible
    //         }
    //     }

    //     if (count == 2) {                                           // Prime number has exactly 2 divisors (1 and itself)
    //         cout << j<<" is prime" <<endl;
    //         }
    //     else 
    //         cout<<j<<" is not prime"<<endl;
    //     }

// Q9.
// int a;
//     cin >> a;

//     switch (a / 10) {
//         case 10:                                     // 100
//         case 9:                                      // 90–99
//             cout << "Grade: A";
//             break;
//         case 8:                                      // 80–89
//             cout << "Grade: B";
//             break;
//         case 7:                                       // 70–79
//         case 6:                                       // 60–69
//             cout << "Grade: C";
//             break;
//         default:                                         // less than 60
//             cout << "Grade: D";
//     }


// Q10.
// int a;
// cin>>a;
// switch (a)
// {
// case 1:
//     cout<<"I";
//     break;
// case 2:
//     cout<<"II";
//     break;
// case 3:
//     cout<<"III";
//     break;
// case 4:
//     cout<<"IV";
//     break;
// case 5:
//     cout<<"V";
//     break;
// case 6:
//     cout<<"VI";
//     break;
// case 7:
//     cout<<"VII";
//     break;
// case 8:
//     cout<<"VIII";
//     break;
// case 9:
//     cout<<"IX";
//     break;
// case 10:
//     cout<<"X";
//     break;
// default:
//     cout<<"Number is not in the range of 1-10 ";
//     break;
// }

// Q11.
// int a;
// cin>>a;

// for(int i = 1 ; i<=a; i++){
//     for(int j = 1; j<=a; j++){
//         if(i==1 || i==a || j==1 || j==a){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

// Q12.
// int a;
// cin>>a;

// for(int i = 1; i<=a; i++){
//     for (int s=i; s<a; s++){
//         cout<<"  ";
//     }
//     for(int j=1; j<=i; j++){
//         cout<<j<<" ";
//     }
//     for(int j=i-1; j>=1; j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// Q13.
// int a;
// cin>>a;
// if(a>0 && ( a & (a-1)) == 0){
//     cout<<"power of 2";
// }
// else{
//     cout<<"not a power of 2";
// }

// Q14.
// int a,b,temp;
// cin>>a>>b;
// cout<<"a = "<<a<<endl;
// cout<<"b = "<<b<<endl;
// temp=a;
// a=b;
// b=temp;
// cout<<a <<" "<<b;        //after swapping 

// cout<<"After swapping"<<endl;
// cout<<"a = "<<a<<endl;
// cout<<"b = "<<b<<endl;

// Q15.
// int x,y;
// cout<<"Enter the value of X: ";
// cin>>x;
// cout<<"Enter the value of Y: ";
// cin>>y;
// if(x>=0 && y<90){
//     cout<<"1st Quadrant";
// }
// else if(x>=90 && y<180){
//     cout<<"2nd Quadrant";
// }
// else if(x>=180 && y<270){
//     cout<<"3rd Quadrant";
// }
// else if(x>=270 && y<360){
//     cout<<"4th Quadrant";
// }
// else if(x==270 || y==360){
//       cout<<"1st Quadrant";
//   }
// else{
//     cout<<"not in range";
// }

// Q16.

// int a, b, c;
// cin >> a >> b >> c;

// if (a + b > c && a + c > b && b + c > a) {
//     cout << "Valid triangle";                                      //  valid traingle = jinki do side ka sum third se jada ho
// } else {
//     cout << "Not a valid triangle";
// }


// test question
/*Write a  program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

// int basic; float gross;
// cin>>basic;

// if(basic<=10000){
//     gross = basic +  (20.0/100)*basic + (80.0/100)*basic;
// }
// else if(basic<=20000){
//     gross = basic +  (25.0/100)*basic + (90.0/100)*basic;
// }

// else{
// gross = basic +  (30.0/100)*basic + (95.0/100)*basic;}

// cout<<gross<<endl;


// 2.Write a program to display the sum of three digit number without using any condition?

//     int num;
//     cout << "Enter a three-digit number: ";
//     cin >> num;

//     // Extract digits
//     int hundreds = num / 100;
//     int tens = (num / 10) % 10;
//     int units = num % 10;

//     // Sum of digits
//     int sum = hundreds + tens + units;

//     // Output the result
//     cout << "Sum of digits: " << sum << endl;


// 3.Write a program for swapping using two variables ?
/*
    int a, b;
    
    // Input values
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Before swap
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using two variables (no third variable)
    a = a + b;
    b = a - b;
    a = a - b;

    // After swap
    cout << "After swapping: a = " << a << ", b = " << b << endl;    */

// 4. Write a program to check the given number is palindrome or not.   = means uska reverse bhi utna hi ho = 121 = 121
/*
    int num, reversed = 0, original, remainder;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if original and reversed are the same
    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;    */


// int a = 1;
// if(a == 10){
//     cout<<"a";

// }

// else{
//     cout<<"b";
// }


// int n;
// cin>>n;
// int temp=n;
// int sum=0;
// while(n>0){
//     int digit = n%10;
//     sum = sum+ digit;
//      n/=10;
// }

// if(n%sum==0){
//     cout<<"harshad number";
// }
// else{
//     cout<<"not";
// }

// Ques. Given a cash amount . find how many 2000, 1000,500,200,100 notes will be in that

    // int n;
    // cin >> n;

    // int notes2000 = 0, notes1000 = 0, notes500 = 0, notes200 = 0, notes100 = 0;

    // if (n >= 2000) {
    //     notes2000 = n / 2000;
    //     n %= 2000;
    // }

    // if (n >= 1000) {
    //     notes1000 = n / 1000;
    //     n %= 1000;
    // }

    // if (n >= 500) {
    //     notes500 = n / 500;
    //     n %= 500;
    // }

    // if (n >= 200) {
    //     notes200 = n / 200;
    //     n %= 200;
    // }

    // if (n >= 100) {
    //     notes100 = n / 100;
    //     n %= 100;
    // }

    // cout << "2000: " << notes2000 << endl;
    // cout << "1000: " << notes1000 << endl;
    // cout << "500: " << notes500 << endl;
    // cout << "200: " << notes200 << endl;
    // cout << "100: " << notes100 << endl;

    // if(n > 0) {
    //     cout << "Remaining (not covered): " << n << endl;
    // }



    return 0;
}


// varible name is refer to memory address of your datatype