#include "ThoiGian.h"
ThoiGian::ThoiGian(int h, int p, int s)
{
	while (s > 59)
	{
		this->Phut += 1;
		s -= 60;
	}
	while (p > 59)
	{
		this->Gio += 1;
		p = p - 60;
	}
	while (h > 24)
	{
		h = h - 24;
	}
	this->Gio = h;
	this->Phut = p;
	this->Giay = s;
}
ThoiGian::operator long()
{
	return this->Gio * 60 * 60 + this->Phut * 60 + this->Giay;
}
ThoiGian ThoiGian::operator+(ThoiGian b)
{
	int s = this->Giay + b.Giay;
	int m = this->Phut + b.Phut;
	int h = this->Gio + b.Gio;
	return ThoiGian(h, m, s);
}
ThoiGian ThoiGian::operator-(ThoiGian b)
{
	int s = this->Giay - b.Giay;
	int m = this->Phut - b.Phut;
	int h = this->Gio - b.Gio;
	return ThoiGian(h, m, s);
}
bool ThoiGian::operator<(ThoiGian b)
{
	return (GetGiay() < long(b));
}
bool ThoiGian::operator>(ThoiGian b)
{
	return (GetGiay() > long(b));
}
bool ThoiGian::operator==(ThoiGian b)
{
	return (GetGiay() == long(b));
}