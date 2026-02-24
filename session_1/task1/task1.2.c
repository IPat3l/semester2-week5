//Week 5, Session 1

/* 
 * Task 1.2
 *
 * Write a C program that reads a year from the user and determines whether it is a leap year.
 *
 * A year is a leap year if:
 * - It is divisible by 4 and not divisible by 100
 *	OR
 * - It is divisible by 400
 *
 * Input
 * - An integer representing a year (e.g., 2024)
 * 
 * Output
 * - Print "Leap Year" if the year is a leap year
 * - Otherwise, print "Not a Leap Year"
 *
 */
 
#include <stdio.h>
 
int main(void) {
	
	char in[100];
    int year;
	
    printf("Enter year: ");
    fgets(in, 10, stdin);
	int count = sscanf(in, "%i", &year);

	// Complete your code here
	if ((year%4==0 && year%100!=0) || year%400==0){  // todo
		printf("Leap Year\n");
	} else{
		printf("Not a Leap Year\n");
	}
	
    return 0;
	 
}