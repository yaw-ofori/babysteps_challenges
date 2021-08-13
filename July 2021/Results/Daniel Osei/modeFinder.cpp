/**********************************************************************************************************
* Babysteps July Project
*
* Q1.
*    As statistician a set of data has been given to you to analyze. Write a program to find the
*    mode of that set.
*
*    INPUT METHOD
*    The program should take in size N of the data to be analyzed and D the data set to be analyzed.
*
*    N - is an integer
*    D - is a set of integers.
*
*    SAMPLE INPUT
*    5
*    2 8 1 2 6
*
*    SAMPLE OUTPUT
*    2
**********************************************************************************************************/
/*
By: Daniel 
*/

#include <iostream>
using namespace std;


int mode(int sz, int* arr) {
    int m = 0;  // element that occurs most frequently / mode

    //Write code to find mode here...
    int i,
	    j, 
	    maxCount = 0,
		count;
        
        
    /* Count the frequency of every elemenet of array, 
    and check if it is greater than maximum count element 
    we found till now and update it accordingly  */
    
    for(i = 0; i< sz; i++){ 
        count = 1;
        for(j = i+1; j < sz; j++){
        	
            if(arr[j] == arr[i]){
                count++;
                /*update maxCount and mode if the count of an element is 
				more than the current count*/
                if(count > maxCount){
                    maxCount = count;
                    m = arr[j];
                }
            }
        }
    }

    return m;
}

int main(int argc, char** argv)
{
    int n = 0; // number array elements
    
    cout <<"How many elements do you have" << endl;  // take user input
    cin >> n;
    
    int d[n] = {0};
    cout << "Please enter them..."<< endl;
    
    for (int i = 0; i < n; ++i) { // take elements 
        cin >> d[i];
    }
    
    cout << "The numbers are: [ ";
    
    for (int j = 0; j < n; ++j) {
        cout << d[j] << "  ";
    }
    cout << "]"<<endl;

    cout << "The mode is " << mode(n, d) << endl;

    return 0;
}
