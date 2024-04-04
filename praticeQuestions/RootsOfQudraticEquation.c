//Create a function to find the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>

void Roots(float a, float b, float c) {
    float root1, root2;
    float discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots of the equation are %f and %f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots of the equation are %f and %f\n", root1, root2);
    } else {
        printf("The equation has no real roots\n");
    }
}

int main() {
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    Roots(a, b, c);
    return 0;
}
