//hw5-12.cpp - displays the total owed
//Created/revised by Matthew Dasch on 9-26-24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double purchase1 = 0.0;
	double purchase2 = 0.0;
	const double halfOff = 0.5;
	double totalOwed = 0.0;

	cout << "What is the price of the first purchase?"<<endl;
	cin >> purchase1;
	cout << "What is the price of the second purchase?"<<endl;
	cin >> purchase2;

	if (purchase1 >= purchase2)
		totalOwed = purchase1 + (purchase2 * halfOff);
	else
		totalOwed = purchase2 + (purchase1 * halfOff);

	cout << "Total owed: $" << fixed << setprecision(2) << totalOwed << endl;

	return 0;
}	//end of main function