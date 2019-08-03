#include <iostream>


using namespace std;

int main()
{   
    char letter_grade{};
    cout<<"Enter the letter grade you expect on the exam: "<<endl;
    cin>>letter_grade;
    
    switch (letter_grade){
        case 'a':
        case 'A':
        cout<<"You need a 90 or above, study hard"<<endl;
        break;
        case 'b':
        case 'B':
        cout<<"You need 80-89 for a B"<<endl;
        break;
        case 'c':
        case 'C':
        cout<<"You need 70-79 for an average grade"<<endl;
        break;
        case 'd':
        case 'D':
        cout<<"You should strive for a better grade.All you need is 60-69 "<<endl;
        break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout<<"Are you sure (Y/N)?"<<endl;
            cin>>confirm;
            if (confirm== 'y'|| confirm=='Y')
                cout<<"OK, I guess you didnt study..."<<endl;
                else if (confirm =='n' || confirm =='N')
                    cout<<"Good, go study!"<<endl;
                    else 
                        cout<<"Illegal choice"<<endl;
            break;
        }
        
        
        cout<<"You failed"<<endl;
        break;
        default:
        cout<<"Sorry , not a valid grade"<<endl;
    }
    
    
    
    
    cout<<endl;
	return 0;
}
