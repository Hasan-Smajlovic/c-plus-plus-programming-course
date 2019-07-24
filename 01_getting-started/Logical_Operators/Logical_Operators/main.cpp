#include <iostream>

using namespace std;

int main()
{
int num {};
const int lower {10};
const int upper {20};

cout<<boolalpha;

//Determine if an entered integer is betwen two other integers
//assume lower<upper
cout<<"Enter an integer-the bounds are "<<lower<<" and "<<upper<<":";
cin>>num;
bool within_bounds {false};

within_bounds=(num>lower&&num<upper);
cout<<num<<" is betwen "<<lower<<" and "<<upper<<":"<<within_bounds<<endl;


cout<<"========================================"<<endl;


//Determine if an entered integer is outside two other integers
//assume lower<upper
cout<<"Enter an integer-the bounds are "<<lower<<" and "<<upper<<":";
cin>>num;
bool outside_bounds {false};

outside_bounds=(num<lower||num>upper);
cout<<num<<" is outside "<<lower<<" and "<<upper<<":"<<outside_bounds<<endl;


cout<<"========================================"<<endl;


//Determine if an entered integer is outside two other integers
//assume lower<upper
cout<<"Enter an integer-the bounds are "<<lower<<" and "<<upper<<":";
cin>>num;

bool on_bounds {false};
on_bounds=(num==lower||num==upper);
cout<<num<<" is on one of the bounds which are "<<lower<< " and "<<upper<<":"<<on_bounds<<endl;

//Determine is you need to wear a coat based on temperature and wind speed
bool wear_coat{false};
double temperature{};
int wind_speed{};

const int wind_speed_for_coat{25}; //wind over this value requires a coast
const double temperature_for_coat{45}; //temperature below this value requires a coat

//Requires a coat if either wind is too high or temperature is too low
cout<<"Enter the current temperature in (F): "<<endl;
cin>>temperature;
cout<<"Enter windspeed in (mph): "<<endl;
cin>>wind_speed;

wear_coat=(temperature<temperature_for_coat|| wind_speed>wind_speed_for_coat);
cout<<"Do you need to wear a coat using AND?"<<wear_coat<<endl;




return 0;
}

