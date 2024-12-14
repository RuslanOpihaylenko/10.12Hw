#include<iostream>
#include "Flat.h"

using namespace std;

int main()
{
	Flat f1;
	cin >> f1;
	cout << f1;
	Flat f2;
	cin >> f2;
	cout << f2;
	f1.operator==(f2);
	f1.operator=(f2);
	f1.operator>(f2);
}