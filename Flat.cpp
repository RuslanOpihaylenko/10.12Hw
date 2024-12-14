#include "Flat.h"
#include<iostream>

using namespace std;

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

Flat& Flat::operator=(const Flat& obj)
{
	if (this->number != nullptr)
	{
		delete[] this->number;
	}
	if (obj.number != nullptr)
	{
		int size = strlen(number);
		this->number = new char[size + 1];
		strcpy_s(this->number, size + 1, number);
	}
	else
	{
		this->number = number;
	}
}

bool Flat::operator>(int n)
{
	if (price > n)
		return true;
	return false;
}
