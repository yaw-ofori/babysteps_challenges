/**
 * ********************************************
 * @file Fract.h
 * @auther dannyose
 * @note Fraction Class declarations
 *
 * **********************************************
 */
#ifndef FRACTION_H
#define FRACTION_H

class Fraction{
	
	private:
		int _numerator;
		int _denominator;
		
	
	public:
		
	// constructor and destructor
	Fraction(void);  // default const
	Fraction(int num, int den); // param constructor
	~Fraction(void);    // destructor
	
	// getters
	int getNum(void) const; 
	int getDen(void) const; 
	
	// setters
	void setNum(int);
	void setDen(int);
	
	// operator overloading
	Fraction& operator= (const Fraction& fractrhs);
	Fraction operator+(const Fraction& fractrhs) const; // binary addition
	Fraction operator-(const Fraction& fractrhs) const; 
	Fraction operator*(const Fraction& fractrhs) const;
	Fraction operator/(const Fraction& fractrhs) const;	
	
	// function to simplify fractions !!!
	// find gcd.
	// find number of time gcd divides both numbers
	void simplify(void);
	
	// to decimal
	double toDecimal(void);	
	
};

#endif // FRACTION_H

