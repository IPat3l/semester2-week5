//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while True:
 *     choice = input("Enter 'q' to quit: ")
 *     if choice == 'q':
 *         break
 */
	char choice;
	char in[50];
	do
	{
		printf("Enter 'q' to quit: ");
		fgets(in, 10, stdin);
		sscanf(in, "%c", &choice);
	} while (choice != 'q');
	
	
    return 0;
}