/* This code determines the grade of the student.
    Written by: Baran, Junex Glenn A.
    Date: 11/24/23
*/

#include <stdio.h>

//User-defined functions
void scoresRead(int *test1, int *test2, int *test3, int *average, int *secondAndThirdAveScore);
char gradeDecide(int average, int test3, int secondAndThirdAveScore);
void showOutput(char grade);

//Main function
int main() {
    //Local declarations | Declaring variables
    int firstTestScore, secondTestScore, thirdTestScore, average, secondAndThirdAveScore;
    char studentGrade;

    //Calling the user-defined functions in the main function
    scoresRead(&firstTestScore, &secondTestScore, &thirdTestScore, &average, &secondAndThirdAveScore);

    studentGrade = gradeDecide(average, thirdTestScore, secondAndThirdAveScore);

    showOutput(studentGrade);

    return 0;
}
                    //User-define functions definition/s
//  This function prompts the user to input the test scores, and calculate them.
void scoresRead(int *test1, int *test2, int *test3, int *average, int *secondAndThirdAveScore) {
    printf("Enter the first test score: ");
    scanf("%d", test1);
    printf("Enter the second test score: ");
    scanf("%d", test2);
    printf("Enter the third test score: ");
    scanf("%d", test3);
    *average = (*test1 + *test2 + *test3) / 3;      //To get the average you can calculate them by simply adding the 3 test scores then divide them by 3
    *secondAndThirdAveScore = (*test2 + *test3) / 2;    //This calculation is for the "If the third score is more than 90%" then the grade is A.
}
//  This function decides what grade will the student get.
char gradeDecide(int average, int test3, int secondAndThirdAveScore) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 70) {
        if (test3 > 90) {
            return 'A';
        } else {
            return 'B';
        }
    } else if (average >= 50) {
        if (secondAndThirdAveScore > 70) {
            return 'C';
        } else {
            return 'D';
        }
    } else {
        return 'F';
    }
}
//  This functioms prints the output.
void showOutput(char grade) {
    printf("Congratulations your rating for this grade is : %c\n", grade);
}
