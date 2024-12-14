#pragma once
class Flat
{
private:
	int space;
	char* number;
	int price;
public:
	bool operator==(int);
	Flat& operator=(const Flat&);
	bool operator>(int);
};

