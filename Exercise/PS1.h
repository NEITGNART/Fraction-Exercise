#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int GCD(int n, int m);

class PS1
{
protected:
	int num, denom;

public:
	void input();
};

class PS2 : public PS1 {
	string sign;

public:
	void Simplif();
	PS2();
	PS2(int num,int denom);
	PS2 operator+(PS2 x);
	PS2 operator-(PS2 x);
	PS2 operator*(PS2 x);
	PS2 operator/(PS2 x);

	bool operator==(PS2 x);
	bool operator!=(PS2 x);
	bool operator>(PS2 x);
	bool operator<(PS2 x);
	bool operator>=(PS2 x);
	bool operator<=(PS2 x);

	PS2& operator++();
	PS2& operator++(int);
	PS2& operator--();
	PS2& operator--(int);


	friend PS2 operator+(int x, PS2 y);
	friend PS2 operator-(int x, PS2 y);
	friend PS2 operator*(int x, PS2 y);
	friend PS2 operator/(int x, PS2 y);
	friend PS2 operator+(PS2 y, int x);
	friend PS2 operator-(PS2 y, int x);
	friend PS2 operator*(PS2 y, int x);
	friend PS2 operator/(PS2 y, int x);


	//friend PS2 operator+(PS2 y, int x);
	//friend PS2 operator-(PS2 y, int x);
	//friend PS2 operator*(PS2 y, int x);
	//friend PS2 operator/(PS2 y, int x);


	friend istream& operator >> (istream& is, PS2& ps2);
	friend ostream& operator <<(ostream& out, const PS2& ps2);

};
