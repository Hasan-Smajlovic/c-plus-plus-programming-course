#include <iostream>
#include <vector>

using namespace std;

int main()
{
 //Declare 2 empty vectors
vector <int> vector1 {};
vector <int> vector2 {};

// add 10 and 20 to vector1 using push_back
vector1.push_back (10); 
vector1.push_back (20);


// Display the elements in vector1 using .at(), as well as using size() method
cout<<vector1.at (0)<<endl;
cout<<vector1.at (1)<<endl;
cout<<"\nVector1 contains" <<vector1.size()<< " elements"<< endl;



//add 100 and 200 to vector 1 using push_back
vector2.push_back (100);
vector2.push_back (200);

cout<<vector2.at(0)<< endl;
cout<<vector2.at(1)<< endl;

cout <<"\nThere are " <<vector2.size()<<" scores in the vectors"<< endl;

vector <vector <int>> vector_2d {};

//add vector1 to vector_2d using push.back
//add vector2 to vector_2d using push.back
vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

//Display  the  elements  in vector_2d using the .at() method
cout <<vector_2d.at(0).at(0)<< " " <<vector_2d.at(0).at(1)<<endl;
cout <<vector_2d.at(1).at(0)<< " " <<vector_2d.at(1).at(1)<<endl;

//Change vector1.at(0) to 1000
vector1.at(0)=1000;
//Display the elements in vector_2d again using the .at() method
cout <<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
cout <<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

//Display the elements in vector1

cout<<"\nVector1: "<< endl;
cout<<vector1.at(0)<<endl;
cout<<vector1.at(1)<<endl;
cout<<"vector1 contains "<<vector1.size()<<" elements"<<endl;

return 0;


}
