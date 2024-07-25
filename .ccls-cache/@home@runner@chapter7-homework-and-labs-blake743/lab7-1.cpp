//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Blake Smith on 7/24/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
//inputs
int day = 0;
int Ttexts = 0;
int Dtexts = 0;
double Average = 0.0;

//processing
for (day = 1; day < 8; day += 1)
    {
        cout<<"Number of texts sent day: " << day <<":";
            cin>>Dtexts;
        Ttexts += Dtexts;
    }

//outputs
Average = static_cast<double>(Ttexts) / (day - 1);
cout<< fixed << setprecision(0);
cout<<"You sent about " << Average << " texts per day." << endl;
    
    return 0;
}   //end of main function