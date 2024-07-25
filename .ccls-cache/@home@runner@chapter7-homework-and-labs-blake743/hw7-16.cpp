//hw7-16.cpp - displays three tip amounts
//Created/revised by Blake Smith on 7/24/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	double tip = 0.0;

	cout << "Bill amount: ";
	cin >> bill;

	cout << fixed;
	double rate = 0.1;
	while (rate <= 0.2)
	{
		tip = bill * rate;
		cout << setprecision(0);
		cout << rate * 100 << "% tip: ";
		cout << setprecision(2);
		cout << "$" << tip << endl;
		rate += 0.05;
	}   // end for
	return 0;
}	//end of main function
