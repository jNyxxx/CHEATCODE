/*
#include <stdio.h>
#include <math.h>

// Function declarations
double calculateDiscriminant(double a, double b, double c);
void calculateRoots(double a, double b, double discriminant, double *x1, double *x2);
void displayRoots(double a, double b, double c);

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    // Prompt user to enter coefficients
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = calculateDiscriminant(a, b, c);

    // Display roots
    displayRoots(a, b, discriminant);

    return 0;
}

// Function to calculate discriminant
double calculateDiscriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

// Function to calculate roots
void calculateRoots(double a, double b, double discriminant, double *x1, double *x2) {
    if (discriminant >= 0) {
        // Calculate square root of discriminant
        double sqrt_discriminant = sqrt(discriminant);

        // Calculate roots
        *x1 = (-b + sqrt_discriminant) / (2 * a);
        *x2 = (-b - sqrt_discriminant) / (2 * a);
    }
}

// Function to display roots based on rules
void displayRoots(double a, double b, double c) {
    double discriminant, x1, x2;

    // Check for special cases
    if (a == 0 && b == 0) {
        printf("No solution.\n");
    } else if (a == 0) {
        // One root (-c / b) when a is zero
        printf("One root: %.2lf\n", -c / b);
    } else {
        // Calculate discriminant
        discriminant = calculateDiscriminant(a, b, c);

        if (discriminant < 0) {
            // No real roots if discriminant is negative
            printf("No real roots.\n");
        } else {
            // Calculate and display roots
            calculateRoots(a, b, discriminant, &x1, &x2);
            printf("Root 1: %.2lf\n", x1);
            printf("Root 2: %.2lf\n", x2);
        }
    }
}
*/

#include <stdio.h>
#include <math.h>

void quadratic_roots(float a, float b, float c) {
  // Check if a and b are both zero
  if (a == 0 && b == 0) {
    printf("There is no solution.\n");
    return;
  }

  // Check if a is zero
  if (a == 0) {
    float root = -c / b;
    printf("There is one root: %f\n", root);
    return;
  }

  // Calculate the discriminant
  float discriminant = b * b - 4 * a * c;

  // Check if the discriminant is negative
  if (discriminant < 0) {
    printf("There are no real roots.\n");
    return;
  }

  // Calculate the roots
  float root1 = (-b + sqrt(discriminant)) / (2 * a);
  float root2 = (-b - sqrt(discriminant)) / (2 * a);

  // Print the roots
  printf("The roots are: %.2f, %.2f\n", root1, root2);
}

int main() {
  float a, b, c;

  printf("Enter the coefficients a, b, and c: ");
  scanf("%f %f %f", &a, &b, &c);

  quadratic_roots(a, b, c);

  return 0;
}
