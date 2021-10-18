/**
 *******************************************
 * @file Fract.cpp
 * @auther dannyose
 * @note Fraction Class implementation
 **********************************************
 */
#include "Fraction.h"
#include <iostream>

// default constructor
Fraction::Fraction(){}

// param contructor
Fraction::Fraction(int num, int den){
	
	_numerator = num;
	_denominator = den;
	
	// checking division by 0
	if( den == 0){
		std::cout << "Division by 0 is invalid\n";
	}	
}

// destructor
Fraction::~Fraction(){}

// Getters
int Fraction::getNum(void) const { return this->_numerator; }
int Fraction::getDen(void) const { return this->_denominator; }

// Setters
void Fraction::setNum(int x) { _numerator = x;}
void Fraction::setDen(int y) { _denominator = y;}

// Operator overloading
/*Assignment*/
Fraction& Fraction::operator= (const Fraction& fractrhs)
{
    // self-assignment guard
    if (this == &fractrhs)
        return *this;

    // do the copy
    _numerator = fractrhs._numerator; 
    _denominator = fractrhs._denominator; 

    return *this; //return itself
}

// finding the highest common factor of any two numbers
int hcf( int num1, int num2 )
{
	int	p = ( num1 < 0 ) ? -num1 : num1;	// set number to negative if less than 0
	int	q = ( num2 < 0 ) ? -num2 : num2;	// set number to negative if less than 0
	while ( q ) { int r = p % q; p = q; q = r; } // repeat process if p%q != 0
	return	p;
}
/* Simplify fractions */
void Fraction::simplify(){
	int	g = hcf( this->_numerator, this->_denominator );
	if ( this->_denominator < 0 ) g = -g;    //
	if ( g != 0 ) { this->_numerator /= g; this->_denominator /= g; } // divide both num, den with hcf
	 
}

// Fraction f1 = a/b f2= c/d

/* Addition */
Fraction Fraction::operator +(const Fraction& fractrhs) const
{
	Fraction result;
    // num = (a*d)+(b*c)
    // den = b*d
	result._numerator = _numerator*fractrhs._denominator + fractrhs._numerator*_denominator;
	result._denominator = _denominator*fractrhs._denominator;
	result.simplify();
	
	return result;
}
/* Subtraction */
Fraction Fraction::operator -(const Fraction& fractrhs)  const
{
	Fraction result;
	// num = (a*d)-(b*c)
    // den = b*d
	result._numerator = _numerator*fractrhs._denominator - fractrhs._numerator*_denominator;
	result._denominator = _denominator*fractrhs._denominator;
	result.simplify();
	
	return result;
}
/* Multiplication */
Fraction Fraction::operator *(const Fraction& fractrhs) const
{
	Fraction result;
	// num = a*c
    // den = b*d
	result._numerator = _numerator*fractrhs._numerator;
	result._denominator = _denominator*fractrhs._denominator;
	
	return result;
}

/* Division */
Fraction Fraction::operator /(const Fraction& fractrhs) const
{
	Fraction result;
	// num = (a*d)
    // den = b*c
	result._numerator = _numerator*fractrhs._denominator;
	result._denominator = _denominator*fractrhs._numerator;
	
	return result;
}


/* Change fraction result to decimal */
double Fraction::toDecimal(){
	
	double decimalNum = (double)this->_numerator / (double)this->_denominator;  // type cast int to double
	
	return decimalNum;
}
//////////////////////////////////////////////////////////////////
// Having problem with simplification code. 
// update challenge code with fraction simplification function. 

