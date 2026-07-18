#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("===== BMI Calculator =====\n");

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi < 25)
        printf("Category: Normal Weight\n");
    else if (bmi < 30)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");

    return 0;
}
