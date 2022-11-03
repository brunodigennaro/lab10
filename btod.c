/*  Bruno DiGennaro 
	CPSC 1110 001; Fall 2022
	October 30, 2022
	Binary to decimal and decimal to binary conversion using two functions
*/

#include "btod.h"

// convert binary to decimal
int btod(int size, char inputBin[size])
{ 
	int decimal = 0, remainder, base = 0;
	for(int i = size - 1; i >= 0; i--) 
	{
		if(inputBin[i] == '1')
		{
			remainder = (inputBin[i] - '0') % 10;
			decimal += remainder * pow(2, base);
		}
			base++;
	}
	return decimal; 
}