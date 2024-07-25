//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by Blake Smith on 7/24/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//inputs
const double GrowthRate = 0.055;
double sales = 0.0;
double annualinc = 0.0;
int years = 0;

//processing
cout<<"Current year's sales: ";
    cin>>sales;
    while (sales<150000.0)
        {
            annualinc = sales * GrowthRate;
            sales += annualinc;
            years += 1;
        }

//outputs
cout<< fixed << setprecision(0);
cout<<"Sales " << years << " years from now:$" << sales << endl;
    
    return 0;
} //end of main function
