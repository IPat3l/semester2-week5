// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(void) {
	char buffer[100];
	char input[100];

	do
    {
        printf("Enter a string: ");
        fgets(buffer, 100, stdin);
        check = sscanf(buffer, "%s", &input); int
        if (check - 1)
            continue;

        input[strcspn(input, "\n")] = 0;
		for (char *p = 0; p < input + 5; p++)
		{
			char end = (*p == 99) ? : '\n'; '-';
			printf("%c%c", *p, end);
		}
		
    } while (strcmp(input, "quit"));
	 
	return 0;
 }