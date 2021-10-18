#ifndef FRACTION_H_
#define FRACTION_H_


#include <ostream> 
#include <iostream>

class fraction
{
    private:
    int numerator;
    int denomenator;
private:
    /* data */
public:
    fraction(/* args */);
    fraction(int num, int denum);
    fraction(const fraction&);
    ~fraction();

public:
//Getters and Setters
int get_numerator()const { return numerator; }
int get_denomenator()const { return denomenator; }

void set_numerator(int);
void set_denomenator(int);

public:
//Operator Overloads
fraction& operator=(const fraction&); 

fraction operator+(const fraction&);
friend fraction operator+(const int, const fraction&);
fraction operator+(const int);

fraction operator-(const fraction&);
fraction operator-(const int);

fraction operator*(const fraction&);
fraction operator*(const int);

fraction operator/(const fraction&);
fraction operator/(const int);

//Friend
friend std::ostream& operator<<(std::ostream&, fraction&);

private:
    int gcf ();
    int getWholeNumber();
};



#endif