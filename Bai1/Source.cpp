#include"ThoiGian.h"
#include<iostream>
using namespace std;
istream& operator>>(istream& input, ThoiGian& t)
{
	input >> t.Giay >> t.Phut >> t.Gio;
	return input;
}
ostream& operator<<(ostream& output, const ThoiGian t)
{
	output << t.Gio << ":" << t.Phut << ":" << t.Giay;
	return output;
}

int main()
{
	system("color b");
	ThoiGian a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "_____________________________________________" << endl;
	cout << a << endl;
	cout << b << endl;
}