/* ******************************************************************************************/
/* PROBLEM 2 */
/*
Write a program which takes in a number and returns a reverse order of the number.

INPUT METHOD
The program should take in a number N 


SAMPLE INPUT
28126

SAMPLE OUTPUT
62182
*/
/*
By: Daniel 
*/


#include <iostream>
using namespace std;

int reverse_num(int n) {
	int rem,  /*store the remainder*/
	    temp = 0;  // temporary reverse number

    //Write code to reverse the number here...
    while(n!=0){
    	rem = n%10;
    	temp =  10*temp+rem;
    	n = n/10;
	}
 	
 	n = temp;

    return n;
}

int main(int argc, char** argv)
{
	int n = 0;
	
	cout << "Enter number you want to reverse"<<endl;
	cin >> n;
	
    cout << "The reverse_num is " << reverse_num(n) << endl;
    
    return 0;
}
