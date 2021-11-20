#include <stdio.h>
int main(void) {
    float value;
    printf("Enter a floating-point value:");
    scanf_s("%f",&value);
    printf("\nfixed-point notation: %.6f", value);
    printf("\nexponential notation: %.6e", value);
    printf("\np notation: %a", value);
    getchar();
    getchar();
    return 0;
}