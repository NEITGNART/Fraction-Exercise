#include "SP1.h"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class SP2;
class SP1;

class SP1
{
	int x;
	SP2* tmp;
public:
	SP1() {}
	void Print() {
		 
	}
};


class SP2 {
	int real, imag;
	
public:
	SP2() {}
	SP2(int real, int imag) : real(real), imag(imag) {}
	void print() const {
		cout << "Real" << real << "Imag" << imag << endl;
	}

};

signed main() {


}