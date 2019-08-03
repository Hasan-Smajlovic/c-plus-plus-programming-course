#include <iostream>


using namespace std;

int main()
{   
    int length {}, width{},height{};
    double base_cost {2.50};
    
    const int tier1_threshold {100}; //volume
    const int tier2_threshold {500}; //volume
    
    int max_dimension_length {10}; //inches
    
    double tier1_surchange {0.10}; //10% extra
    double tier2_surchange {0.25}; //25% extra
    
    //All dimension must be 10 inches or less
    
    int package_volume {};
    
    cout<<"Welcome to the package cost calculator"<<endl;
    cout<<"Enter length, width, and height of the package seperated by spaces: "<<endl;
    cin>>length>>width>>height;
    
    if(length>max_dimension_length || width>max_dimension_length || height>max_dimension_length)
 {
        cout<<"Sorry, package rejected - dimension exceeded"<<endl;
        
    } 
    else {
       double package_cost{};
       package_volume=length * width * height;
       package_cost=base_cost;
       
       if(package_volume>tier2_threshold) {
           package_cost+= package_cost * tier2_surchange;
           cout<<"Adding tier 2 surcharge"<<endl;
       }
            else if (package_volume>tier1_threshold) {
                package_cost+=package_cost*tier2_surchange;
                cout<<"Adding tier 1 surcharge"<<endl;
           }
            cout<<"The volume of your package is : "<<package_volume<<endl;
            cout<<"Your package will cost $"<<package_cost<<" to ship"<<endl;
    }
    cout<<endl;
	return 0;
}
