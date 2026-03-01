/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID: 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
	long decimal = 0;
	long mult = 1;
	long num;
	char hex[9];
	char buffer[9];

	printf("Enter a hexadecimal: ");
	fgets(buffer, 9, stdin);
	int check = sscanf(buffer, "%8s", hex);
	
	long len = strlen(hex); // Find length of hex input
	for (int i = len - 1; i >= 0; i--) // Loop from rightmost character of input to leftmost
	{	
		char digit = hex[i]; // Get the current digit
		switch (digit) // Convert character to an integer here
		{
		case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
			num = digit - '0';
			break;
		case 'A': case 'a':
			num = 10;
			break;
		case 'B': case 'b':
			num = 11;
			break;
		case 'C': case 'c':
			num = 12;
			break;
		case 'D': case 'd':
			num = 13;
			break;
		case 'E': case 'e':
			num = 14;
			break;
		case 'F': case 'f':
			num = 15;
			break;
		default:
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}
		decimal += num * mult;
		mult *= 16;
	}
	
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal: %ld\n", decimal);
	
	return 0;
}