#include <iostream>

using namespace std;


int main()
{
	char vowels [] {'a','e','i','o','u'};
    cout << "\mThe first vowel is: "<<vowels[0] << endl;
    cout << "The last vowel is:" << vowels [4] << endl;
    
    double hi_temps [] {90.1, 89.8, 77.5, 81.6} ;
    cout <<"\nThe first high temperature is: " <<hi_temps[0] << endl;
    
    hi_temps[0]=100.7;  //set the first element in hi_templates to 100.7
    cout <<"The first high temperature is now: "<<hi_temps [0] << endl;

int test_scores [5] {100,90,80,70,60};   

cout <<"\nFirst scores at index 0: " <<test_scores[0]<< endl;
cout <<"Second scores at index 1: " <<test_scores[1]<< endl;
cout <<"Third scores at index 2: " <<test_scores[2]<< endl;
cout <<"Fourth scores at index 3: " <<test_scores[3]<< endl;
cout <<"Fifth scores at index 4: " <<test_scores[4]<< endl;
            
            
cout <<"\nEnter 5 test scored: ";
cin>>test_scores[0];
cin>>test_scores[1];
cin>>test_scores[2];
cin>>test_scores[3];
cin>>test_scores[4];

cout <<"\nFirst scores at index 0: " <<test_scores[0]<< endl;
cout <<"Second scores at index 1: " <<test_scores[1]<< endl;
cout <<"Third scores at index 2: " <<test_scores[2]<< endl;
cout <<"Fourth scores at index 3: " <<test_scores[3]<< endl;
cout <<"Fifth scores at index 4: " <<test_scores[4]<< endl;

cout <<"\nNotice what the value of they array name is: " <<test_scores<< endl;


return 0;
        
            
} 
