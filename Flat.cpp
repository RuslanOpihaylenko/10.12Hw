#include "Flat.h"
#include<iostream>

using namespace std;

Flat::Flat(int space, int number, int price)
{
	if (space >= 0)
	{
		this->space = space;
	}
	else
	{
		this->space = 0;
	}
	if (number >= 0)
	{
		this->number = number;
	}
	else
	{
		this->number = 0;
	}
	if (price >= 0)
	{
		this->price = price;
	}
	else
	{
		this->price = 0;
	}
}

bool Flat::operator==(int n)
{
	if (n == space)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Flat::operator=(int n)
{
	if (n != this->number)
	{
		n = number;
	}
	else
	{
		return n;
	}
}

bool Flat::operator>(int n)
{
	if (price > n)
		return true;
	return false;
}

Flat::Flat(const Flat& obj)
{
	this->space = obj.space;
	this->number = obj.number;
	this->price = obj.price;
}

void Flat::setSpace(int my_space)
{
	this->space = my_space;
}

void Flat::setNumber(int my_number)
{
	this->number = my_number;
}

void Flat::setPrice(int my_price)
{
	this->price = my_price;
}

int Flat::getSpace()
{
	return this->space;
}

int Flat::getNumber()
{
	return this->number;
}

int Flat::getPrice()
{
	return this->price;
}

ostream& operator<<(ostream& my_cout, const Flat& obj)
{
	my_cout << "Space: " << obj.space << endl;
	my_cout << "Number: " << obj.number << endl;
	my_cout << "Price: " << obj.price << endl;
	return my_cout;
}

istream& operator>>(istream& my_cin, Flat& obj)
{
	int space;
	int number;
	int price;
	cout << "Space: ";
	my_cin >> space;
	obj.setSpace(space);
	cout << "Number: ";
	my_cin >> number;
	obj.setNumber(number);
	cout << "Price: ";
	my_cin >> price;
	obj.setPrice(price);
	return my_cin;
}
