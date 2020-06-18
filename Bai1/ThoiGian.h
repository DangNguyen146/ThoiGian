#include<iostream>
using namespace std;
#pragma once
class ThoiGian
{
private:
	int Gio;
	int Phut;
	int Giay;
public:
	ThoiGian() :Gio(0), Phut(0), Giay(0) {}
	ThoiGian(int h, int p, int s);
	operator long();
	long GetGiay()
	{
		return this->Gio * 60 * 60 + this->Phut * 60 + this->Giay;
	}
	ThoiGian operator+(ThoiGian b);
	ThoiGian operator-(ThoiGian b);
	bool operator>(ThoiGian b);
	bool operator<(ThoiGian b);
	bool operator==(ThoiGian b);

	friend istream& operator>>(istream& input, ThoiGian& t);
	friend ostream& operator<<(ostream& output, ThoiGian t);
};


