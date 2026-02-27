//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
     char buff[50];
	 do
     {
        printf("Please enter the password: ");
        fgets(buff, 10, stdin);
	    int count = sscanf(buff, "%s", &password);
     } while (strcmp(password, "secure123"));
     printf("Password correct! Welcome \n");
     
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
	
    return 0;
}