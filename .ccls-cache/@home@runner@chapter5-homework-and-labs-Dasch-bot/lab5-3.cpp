//lab5-3.cpp - displays the total amount due
//Created/revised by Matthew Dasch on 9-26-24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double purchasePrice = 0.0;
	const double clubDiscount = 0.1;
	const double regDiscount = 0.05;
	const double shippingOver100 = 0.99;
	const double regularShipping = 4.99;
	char clubMember = ' ';
	double totalPrice = 0.0;
	cout<<"What is the price of your purchase?"<<endl;
	cin>> purchasePrice;
	cout<<"Are you a club member? (Y/N)"<<endl;
	cin>>clubMember;
	if (toupper(clubMember) == 'Y')
		purchasePrice = purchasePrice - (purchasePrice * clubDiscount);
	else
		purchasePrice = purchasePrice - (purchasePrice * regDiscount);
	if (purchasePrice >= 100)
		totalPrice = purchasePrice + shippingOver100;
	else
		totalPrice = purchasePrice + regularShipping;

	cout<<"Your total price is $"<<fixed<<setprecision(2)<<totalPrice<<endl;

	return 0;
}	//end of main function