/**
 * ***********************************************
 * @file main.cpp
 * @author dannyose
 * @note main cpp file to use/test Fraction class
 * 
 * Date: 12/10/2021 -dd/mm/yyyy (latest)
 * ************************************************
 */

#include "Fraction.h"
#include <iostream>

    using std::cout;
    using std::endl;

//
// Main Module
// Description: Program begins here
// Input: int argc, char** argv
// Process: 
// Output none
//

int main(int argc, char** argv) {
	cout << "Fraction Calculator App - Here." <<endl;
	
	// testing
	/* creating fraction */
	cout << "\nCreate fractions f1(2,3) and f3 "<<endl;
	Fraction f1(2,3), f3;
	cout << "Num f1 = " << f1.getNum() << endl;
	cout << "Den f1 = " << f1.getDen() << endl;
	
	
	/* assignment */
	// f3(2,3)
	cout << "\nAssignment - f3 = f1"<<endl;
	f3 = f1;
	cout << "Num f3 = " << f3.getNum() << endl;
	cout << "Den f3 = " << f3.getDen() << endl;
	
	/* addition */
	// f3(21,18)
	cout << "\nAddition 2/3 + 3/6 "<<endl;
	Fraction f2(3,6);
	f3 = f1+f2;
	cout << "Num f3 = " << f3.getNum() << endl;
	cout << "Den f3 = " << f3.getDen() << endl;
	
	/* subtraction */
	// f3(3,18)
	cout << "\nSubtraction 2/3 - 3/6"<<endl;
	f3 = f1-f2;
	cout << "Num f3 = " << f3.getNum() << endl;
	cout << "Den f3 = " << f3.getDen() << endl;
	
	/* multiplication */
	// f3(6,18)
	cout << "\nMultiplication 2/3 * 3/6"<<endl;
	f3 = f1*f2;
	cout << "Num f3 = " << f3.getNum() << endl;
	cout << "Den f3 = " << f3.getDen() << endl;
	
	/* division */
	// f3(12,9)
	cout << "\nDivision 2/3 / 3/6"<<endl;
	f3 = f1/f2;
	cout << "Num f3 = " << f3.getNum() << endl;
	cout << "Den f3 = " << f3.getDen() << endl;
	
	/* toDecimal */
	// f4(1,4) = 1/4 = 0.25
	cout << "\nTo Decimal "<<endl;
	Fraction f4(1, 4);
	cout << f4.toDecimal() << endl;
	
	std::cout << "\n";
	system("pause");
	return 0;
}

