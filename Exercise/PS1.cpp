#include "PS1.h"

PS2::PS2() {
	num = denom = 1;
}

int GCD(int n, int m) {
	if (n < 0) n = -n; if (m < 0) m = -m;
	while (m > 0) {
		int r = n % m;
		n = m;
		m = r;
	}
	return n;
}

// PS1::
void PS1::input() {
	cout << "Enter numerators and denominators(Ex: 3/4) :";
	cin >> num;
	char tmp;
	cin >> tmp;
	do {
		 cin >> denom;
		if (denom == 0) {
			cout << "Denominators not equal zero. Try again!" << endl;
			cout << "Enter denominators :";
		}
	} while (denom == 0);
}

// PS2:: scope resolution

void PS2::Simplif() {
	int tmp = GCD(num, denom);
	num /= tmp;
	denom /= tmp;
}


// Constructor with parameter
PS2::PS2(int num, int denom) {
	this->num = num;
	this->denom = denom;
}

PS2 PS2::operator+(PS2 x) {
	int z; int t;
	z = num * x.denom + denom * x.num;
	t = denom * x.denom;
	PS2 tmp(z, t);
	return tmp;
}
PS2 PS2::operator-(PS2 x) {
	int z; int t;
	z = num * x.denom - denom * x.num;
	t = denom * x.denom;
	PS2 tmp(z, t);
	return tmp;
}
PS2 PS2:: operator*(PS2 x) {
	int z; int t;
	z = num*x.num;
	t = denom * x.denom;
	PS2 tmp(z, t);
	return tmp;
}
PS2 PS2::operator/(PS2 x) {
	int z; int t;
	z = num * x.denom;
	t = denom * x.num;
	PS2 tmp(z, t);
	return tmp;
}

bool PS2::operator==(PS2 x) {
	return (num == x.num && denom == x.denom);
}
bool PS2::operator!=(PS2 x) {
	return !((*this == x));
}
bool PS2::operator>(PS2 x) {
	return ( (double)num / denom > (double)x.num / denom );
}
bool PS2::operator>=(PS2 x) {
	if ((*this) == x) return true;
	if ((*this) > x) return true;
	return false;
}
bool PS2::operator<=(PS2 x) {
	if ((*this) == x) return true;
	return !((*this > x));
}
bool PS2::operator<(PS2 x) {
	return !((*this > x));
}

PS2& PS2::operator++() {
	*this = *this + 1;
	return *this;
}
PS2& PS2::operator++(int) {
	PS2 copy(this->num, this->denom);
	*this = *this + 1;
	return copy;
}
PS2& PS2::operator--() {
	*this = *this - 1;
	return *this;
}
PS2& PS2::operator--(int) {
	PS2 copy(this->num, this->denom);
	*this = *this - 1;
	return copy;
}

PS2 operator+(int x, PS2 y) {
	PS2 res;
	res.num = x * y.denom + y.num;
	res.denom = y.denom;
	res.Simplif();
	return res;
}
PS2 operator-(int x, PS2 y) {
	PS2 res;
	res.num = x * y.denom - y.num;
	res.denom = y.denom;
	res.Simplif();
	return res;
}
PS2 operator*(int x, PS2 y) {
	PS2 res;
	res.num = x * y.num;
	res.denom = y.denom;
	return res;
}
PS2 operator/(int x, PS2 y) {
	PS2 res;
	res.num = x * y.denom;
	res.denom = y.denom;
	res.Simplif();
	return res;
}

PS2 operator+(PS2 y, int x) {
	PS2 res;
	res.num = x * y.denom + y.num;
	res.denom = y.denom;
	res.Simplif();
	return res;
}
PS2 operator-(PS2 y, int x) {
	PS2 res;
	res.num = x * y.denom - y.num;
	res.denom = y.denom;
	res.Simplif();
	return res;
}
PS2 operator*(PS2 y, int x) {
	PS2 res;
	res.num = x * y.num;
	res.denom = y.denom;
	res.Simplif();
	return res;
}
PS2 operator/(PS2 y, int x) {
	PS2 res;
	res.num = x * y.denom;
	res.denom = y.denom;
	res.Simplif();
	return res;
}

istream& operator >> (istream& is, PS2 &ps2) {
	ps2.input();
	return is;
}
ostream& operator <<(ostream& out, const PS2 &ps2) {
	int re = GCD(ps2.num, ps2.denom);
	if (ps2.denom / re == 1) 
		out << ps2.num / re;
	else
		out << ps2.num/re << "/" << ps2.denom/re;
	return out;
}