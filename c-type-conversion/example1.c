#include <stdio.h>

int main()
{
    int x = 5;
    int y = 2;
    int result = x / y;

    printf("%d\n", result);

    // Implicit Conversion
    float myFloat = 9;
    printf("%f\n", myFloat);

    int myInt = 9.99;
    printf("%d\n", myInt);

    float resultTwo = 5 / 2;
    printf("%f\n", resultTwo);

    // Explicit Conversion
    float resultThree = (float) 5 / 2;
    printf("%f\n", resultThree);

    int num1 = 5;
    int num2 = 2;
    float resultFour = (float) num1 / num2;
    printf("%f\n", resultFour);

    // Real-Life Example
    int maxScore = 500;
    int userScore = 423;

    float percentage = (float) userScore / maxScore * 100.0;

    printf("User's percentage is %.2f\n", percentage);
    return 0;
}
