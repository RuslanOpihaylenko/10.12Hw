#pragma once
class Flat
{
private:
	int space;
	int number;
	int price;
public:
	Flat(int space, int number, int price);
	bool operator==(int);
	int operator=(int);
	bool operator>(int);
	Flat(const Flat&);
	void setSpace(int);
	void setNumber(int);
	void setPrice(int);
	int getSpace();
	int getNumber();
	int getPrice();
	friend ostream& operator<<(ostream& my_cout, const Flat& obj);
	friend istream& operator>>(istream& my_cin, Flat& obj);
};

