
/* 
 Hasans Carpet Cleaning Service
  * Charges:
  * $25 per small room
  * $35 per large room
  * Sales tax rate is 6%
  * Estimates are valid for 30 days
  * 
  * Prompt the user for the number of small and large rooms they would like cleaned
  * 
  * Estimate for carpet cleaning service
  * Number of small rooms: 3 
  * Number of large rooms: 1 
  * Price per small room: $25
  * Price per large room: $35
  * Cost: $110 
  * Tax: $6.6
  * ========================================
  * Total estimate: $116.6
  * This estimate is valid for 30 days
  * */ 


#include <iostream>

using namespace std;

int main()
{
	cout <<"Hello welcome to Hasans Carpet Cleaning Service"<< endl;
    
    
    //number of rooms
        int number_of_small_rooms (0);
        int number_of_large_rooms (0);
        
        
 
   cout <<"How many small rooms would you like cleaned? " << endl;
    cin >>number_of_small_rooms;
  
  cout <<"How many large rooms would you like cleaned? " << endl;
    cin >>number_of_large_rooms;
    
 
   //prices per rooms and tax
       const double price_per_small_room (25.0);
	   const double price_per_large_room (35.0);
       const double tax (6.6);
   
 //Estimate for carpet cleaning service
 cout <<"Estimate for carpet cleaning service"<< endl;
 cout <<"Number of small rooms: " <<number_of_small_rooms<< endl;
 cout <<"Number of large rooms: " <<number_of_large_rooms<< endl;
 cout <<"Price per small room is: $" <<price_per_small_room<< endl;
 cout <<"Price per large room is: $" <<price_per_large_room<< endl;
 cout <<"Cost is: $" <<(number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room)<< endl;
 cout <<"Tax is: $" <<tax<< endl; 
 cout <<"======================================================"<< endl;
 
     

        //declare how many days is estimate valid
           const int days_estimate_is_valid (30);
 
 //Total estimatwe
 cout <<"Total estimate is: $" << (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room) + tax<< endl;
 
 cout <<"This estimate is valid for:" <<days_estimate_is_valid<< " days"<< endl;
 return 0;
}

