//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */
    int sum, user_num, check;
    char buff[50];
    do
    {
        printf("Enter a number to be added to the sum: ");
        fgets(buff, 10, stdin);
        check = sscanf(buff, "%d", &user_num);
        if (check - 1)
            continue;
        sum += user_num;
    } while (user_num != 0);
    printf("Final sum is %i\n", sum);
    return 0;
}