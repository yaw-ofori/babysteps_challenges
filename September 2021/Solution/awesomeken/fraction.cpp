#include "include/fraction.h"

fraction::fraction(/* args */)
{
}

fraction::fraction(int num, int denum)
{
    this->numerator = num;
    this->denomenator = denum;
}

fraction::fraction(const fraction& rhs)
{
    this->set_numerator(rhs.numerator);
    this->set_denomenator(rhs.denomenator);
}

fraction::~fraction()
{
}

//Setters
void fraction::set_numerator(int val) {
    this->numerator = val;
}
void fraction::set_denomenator(int val) {
    this->denomenator = val;
}


//Operator Overloads
//=
fraction& fraction::operator=(const fraction& rhs) {
    if(&rhs == this) return *this;

    this->set_numerator(rhs.get_numerator());
    this->set_denomenator(rhs.get_denomenator());
    return *this;
}

//+
fraction fraction::operator+(const fraction& rhs) {
    fraction temp;
    temp.set_numerator(
                        (this->get_numerator() * rhs.get_denomenator()) + 
                        (this->get_denomenator() * rhs.get_numerator())
                        );
    
    temp.set_denomenator(this->get_denomenator() * rhs.get_denomenator());

    return temp;
}

//Adding an int literal with a fraction object eg. 3 + fractionObj
fraction operator+(const int lhs, const fraction& rhs) {
    fraction temp;
    temp.set_numerator((lhs * rhs.get_denomenator()) + (rhs.get_numerator()));
    
    temp.set_denomenator(rhs.get_denomenator());

    return temp;
}

//Adding fraction object with int literal eg. fractionObj + 3
fraction fraction::operator+(const int rhs) {
    fraction temp;
    temp.set_numerator(
                        (this->get_numerator() ) + 
                        (this->get_denomenator() * rhs)
                        );
    
    temp.set_denomenator(this->get_denomenator() * rhs);

    return temp;
}


//-
fraction fraction::operator-(const fraction& rhs) {
    fraction temp;
    temp.set_numerator(
                        (this->get_numerator() * rhs.get_denomenator()) - 
                        (this->get_denomenator() * rhs.get_numerator())
                        );
    
    temp.set_denomenator(this->get_denomenator() * rhs.get_denomenator());

    return temp;
}

//Subtractin fraction with int literal
fraction fraction::operator-(const int rhs) {
    fraction temp;
    temp.set_numerator(
                        (this->get_numerator() ) - 
                        (this->get_denomenator() * rhs)
                        );
    
    temp.set_denomenator(this->get_denomenator() * rhs);

    return temp;
}

//*
fraction fraction::operator*(const fraction& rhs) {
    fraction temp;
    temp.set_numerator( (this->get_numerator() * rhs.get_numerator()) );
    
    temp.set_denomenator(this->get_denomenator() * rhs.get_denomenator());
    return temp;
}

//*
fraction fraction::operator*(const int rhs) {
    fraction temp;
    temp.set_numerator( (this->get_numerator() * rhs) );   
    temp.set_denomenator(this->get_denomenator());
    
    return temp;
}

//DIVISION
fraction fraction::operator/(const fraction& rhs) {
    fraction temp;
    temp.set_numerator( (this->get_numerator() * rhs.get_denomenator()) );
    temp.set_denomenator(this->get_denomenator() * rhs.get_numerator());

    return temp;
}

//DIVISION
fraction fraction::operator/(const int rhs) {
    fraction temp;
    temp.set_numerator( (this->get_numerator()) );
    temp.set_denomenator(this->get_denomenator() * rhs);

    return temp;
}


int fraction::gcf () {
    int t;
    int n = this->numerator;
    int d = this->denomenator;
    while (n != 0)
    {
        t = n;
        n = d % n;
        d = t;
    }
    return d;
}
int fraction::getWholeNumber() {
    int n = this->numerator;
    int d = this->denomenator;
    int cnt = 0; 
    do
    {
        cnt++;
    } while ((n-=d) > d);
    
    return cnt;
}
//output stream
std::ostream& operator<<(std::ostream& out, fraction& rhs) {
    int cf = rhs.gcf ();
    if (rhs.get_numerator()< rhs.get_denomenator())
    {
        out << (rhs.get_numerator()/cf) << "/" << (rhs.get_denomenator()/cf) << std::endl;
    }
    else
    {
        int wholeNum = rhs.getWholeNumber();
        out << wholeNum << " " << ((rhs.get_numerator() % rhs.get_denomenator())/cf) << "/" << (rhs.get_denomenator()/cf) << std::endl;
    }
    
        

    return out;
}
