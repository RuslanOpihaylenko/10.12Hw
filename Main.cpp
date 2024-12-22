#include<iostream>
#include "Flat.h"

using namespace std;

int main()
{
	int space;
	int number;
	int price;
	cout << "Space: ";
	cin >> space;
	cout << "Number: ";
	cin >> number;
	cout << "Price: ";
	cin >> price;
	Flat f1 = {space,number,price};
	cin >> f1;
	cout << f1;
	Flat f2 = { space,number,price };
	cin >> f2;
	cout << f2;
	f1.operator==(f2);
	f1.operator=(f2);
	f1.operator>(f2);
	f1.setSpace(35);
	f1.setNumber(3134);
	f1.setPrice(41242);
	f2.setSpace(40);
	f2.setNumber(3322);
	f2.setPrice(34394);
	f1.getSpace();
	f1.getNumber();
	f1.getPrice();
	f2.getSpace();
	f2.getNumber();
	f2.getPrice();
}