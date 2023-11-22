#include <stdio.h>

void scoresRead(int *test1, int *test2, int *test3, int *average, int *secondAndThirdAveScore);
char gradeDecide(int average, int test3, int secondAndThirdAveScore);
void showOutput(char grade);

int main() {
    int firstTestScore, secondTestScore, thirdTestScore, average, secondAndThirdAveScore;
    char studentGrade;

    scoresRead(&firstTestScore, &secondTestScore, &thirdTestScore, &average, &secondAndThirdAveScore);

    studentGrade = gradeDecide(average, thirdTestScore, secondAndThirdAveScore);

    showOutput(studentGrade);

    return 0;
}

void scoresRead(int *test1, int *test2, int *test3, int *average, int *secondAndThirdAveScore) {
    printf("Enter the first test score: ");
    scanf("%d", test1);
    printf("Enter the second test score: ");
    scanf("%d", test2);
    printf("Enter the third test score: ");
    scanf("%d", test3);
    *average = (*test1 + *test2 + *test3) / 3;
    *secondAndThirdAveScore = (*test2 + *test3) / 2;
}

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

void showOutput(char grade) {
    printf("Congratulations your rating for this grade is : %c\n", grade);
}
