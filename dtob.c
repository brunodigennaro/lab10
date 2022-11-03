/*  Bruno DiGennaro 
	CPSC 1110 001; Fall 2022
	October 30, 2022
	Binary to decimal and decimal to binary conversion using two functions
*/

#include "dtob.h"

// converting decimal to binary
int dtob(int inputDec)
{ 	 
	int remainder = 0, i = 1, bin = 0; 
	int num = inputDec;
	 while(num != 0)
     {
		 remainder = num % 2;
		 num = num / 2;
		 bin += remainder * i; 
		 i *= 10; 
	}
	return bin; 
}