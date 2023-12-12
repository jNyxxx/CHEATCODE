#include <stdio.h> //Letter A Loop

int main ()
{
    int i;
    for (i = 1; i < 10; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>  //Letter B Loop

int main ()
{
    int i;
    for (i = 9; i >= 1; i = i - 2)
    {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>  //Letter C Loop

int main ()
{
    int i;
    for (i = 10; i <= 100; i = i + 10)
    {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>   //Letter D Loop

int main() {
    int i, j;
    for (i = 1; i <= 5; i++)  // Outer loop for the rows (1 to 5)
    {
        for (j = 1; j <= i; j++)    // Inner loop for printing numbers in each row
        {
            printf("%d", j);   // Print the current value of 'j'
            if (j < i)        // Print a space if 'j' is less than 'i' (not the last number in the row)
            {
                printf(" ");    // Print a space if 'j' is less than 'i' (not the last number in the row)
            }
        }
        printf("\n");   // Move to the next line after printing a row
    }
    return 0;
}
/*
Explanation:

The outer loop (for (i = 1; i <= 5; i++)) controls the number of rows. It runs from 1 to 5.

The inner loop (for (j = 1; j <= i; j++)) controls the number of values printed in each row. It runs from 1 to the current value of i.

Inside the inner loop, printf("%d", j) prints the current value of j.

After printing each number, a space is printed (printf(" ")) if the current value of j is less than i. This ensures that a space is not printed after the last number in each row.

After completing each row, printf("\n") is used to move to the next line.

The result is a pattern where each row contains numbers from 1 to the row number, separated by spaces. The output matches the desired pattern:
*/
