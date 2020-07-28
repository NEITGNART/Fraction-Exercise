#include "PS1.h"

int main(void) {
	cout << "Enter two fraction" << endl << endl;
	PS2 Fraction1;
	cin >> Fraction1;
	cout << Fraction1 << endl;
	PS2 Fraction2;
	cin >> Fraction2;
	cout << Fraction2 << endl;

	PS2 Fraction3 =  Fraction1 + Fraction2;
	cout << "+ Two Fraction: ";
	cout << Fraction3 << endl;

	Fraction3 = Fraction1 - Fraction2;
	cout << "- Two Fraction: ";
	cout << Fraction3 << endl;

	Fraction3 = Fraction1*Fraction2;
	cout << "* Two Fraction: ";
	cout << Fraction3 << endl;

	Fraction3 = Fraction1 / Fraction2;
	cout << "/ Two Fraction: ";
	cout << Fraction3 << endl;


	cout << "Compare two fraction.!" << endl;
	if (Fraction1 == Fraction2) cout << "Two fraction campare is equal" << endl;
	if (Fraction1 > Fraction2) cout << "Fraction 1 is bigger than Fraction 2" << endl;
	if (Fraction1 < Fraction2) cout << "Fraction 1 is smaller than Fraction 2" << endl;
	if (Fraction1 <= Fraction2) cout << "Fraction 1 is smaller or equal Fraction 2" << endl;
	if (Fraction1 >= Fraction2) cout << "Fraction 1 is bigger or equal Fraction 2" << endl;
	if (Fraction1 != Fraction2) cout << "Two fraction not equal" << endl;
	return 0;
}