// write your code here
//Kourtney Smith J00951715
//Example 5.4 Page 278
//Nov 17, 2022
#include <iostream>                                   
#include <string>                                      
#include <iomanip>                                      
using namespace std;    

const string SENTINEL = "-1";

int main(){              

string name;  
int numOfVolunteers;   
int numOfBoxesSold;         
int totalNumOfBoxesSold; 
double costOfOneBox;   

cout << fixed << showpoint << setprecision(2);   
                      
totalNumOfBoxesSold = 0;       
numOfVolunteers = 0;         
cin >> name;             

while (name != SENTINEL)   
  {                                                   
    cin >> numOfBoxesSold;      
    totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;         
numOfVolunteers++;                 
    cin >> name;   
    }                                               cin >> costOfOneBox; 
cout << "Total number of boxes sold: " << totalNumOfBoxesSold;         
                      
cout << endl;             
cout << "Total money made: $"  << totalNumOfBoxesSold * costOfOneBox << endl; 
if (numOfVolunteers != 0)     
  cout << "Average number of " << "boxes sold by each person: "  << totalNumOfBoxesSold / numOfVolunteers << endl;                                   

else {
  cout << "No input.";     }     
return 0;                                            
}  
