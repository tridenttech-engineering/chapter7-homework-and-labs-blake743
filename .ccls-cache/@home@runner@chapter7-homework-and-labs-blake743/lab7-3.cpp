//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Blake Smith on 7/24/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
//inputs
int day = 1;
int Ttexts = 0;
int Dtexts = 0;
double Average = 0.0;

//processing
while (day < 8)
    {
        cout<<"Number of texts sent day: " << day <<":";
            cin>>Dtexts;
        Ttexts += Dtexts;
        day+=1;
    }

//outputs
Average = static_cast<double>(Ttexts) / (day - 1);
cout<< fixed << setprecision(0);
cout<<"You sent about " << Average << " texts per day." << endl;

    return 0;
}   //end of main function