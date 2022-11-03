/*  Bruno DiGennaro 
	CPSC 1110 001; Fall 2022
	October 30, 2022
	Binary to decimal and decimal to binary conversion using two functions
*/

#include <stdio.h>
#include <string.h> 
#include <math.h> 
#include "btod.h"
#include "dtob.h"

int main()
{
	//int input;
	char inputBin[30];
	int inputDec; 

	printf("Enter a binary number: "); 
	scanf("%s", inputBin); 
	// sets size to the length of string inputBin
	int size = strlen(inputBin); 

	printf("Decimal conversion is: %i\n", btod(size, inputBin));
	
	printf("Enter a decimal number: ");
	scanf("%d", &inputDec);

	printf("Binary conversion is: %d\n", dtob(inputDec));
return 0; 	
}