#include <iostream>

using namespace std;

int main()
{
cout<<boolalpha;
    
int num1 {}, num2 {};
cout<<"Enter 2 integers: "<<endl;
cin>>num1>>num2;
cout<<num1<<">"<<num2<<" : "<<(num1>num2)<<endl;
cout<<num1<<"<"<<num2<<" : "<<(num1<num2)<<endl;
cout<<num1<<">="<<num2<<" : "<<(num1>=num2)<<endl;
cout<<num1<<"<="<<num2<<" : "<<(num1<=num2)<<endl;

const int lower {10};
const int upper {20};

cout<<"Enter an integer that is greater than: " <<lower<<":";
cin>>num1;
cout<<num1<<" > "<<lower<<" is "<<(num1>lower)<<endl;

cout<<"Enter an integer that is greater than: " <<upper<<":";
cin>>num1;
cout<<num1<<" <= "<<upper<<" is "<<(num1<=upper)<<endl;


return 0;
}
