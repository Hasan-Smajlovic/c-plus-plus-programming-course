/* 
 * Ask the user ti enter 3 integers
 * Calculate the sum of the integers then 
 calculate the average of the 3 integers.
   
   
   * Display the 3 integers entered
   * The sum of the 3 integers and 
   the average of the 3 integers.
    */

#include <iostream>

using namespace std;

int main()
{
 int total{};
 int num1 {},num2{}, num3{};   
 const int count {3};
 cout<<"Enter 3 integers seperated by spaces: "<<endl;
 cin>>num1>>num2>>num3;
 
 total=num1+num2+num3;
 
 double average {0.0};
 average=static_cast<double>(total)/count;
 
 cout<<"The 3 numbers were "<<num1<<","<<num2<<","<<num3<<","<<endl;
 cout<<"The sum of the numbers is: "<<total<<endl;
 cout<<"Average of the numbers is: "<<average<<endl;
 
 
cout<<endl;
return 0;
}
