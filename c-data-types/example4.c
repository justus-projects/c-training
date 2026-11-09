#include <stdio.h>

int main()
{
    float myFloatNum = 3.5;
    float myDoubleNum = 19.99;
    float myFloatRound = 3.141592;

    // printf("%f\n", myFloatNum);
    // printf("%lf\n", myDoubleNum);

    // Decimal Place formatting

    printf("%f\n", myFloatNum);     // Defaults to 6 decimal places
    printf("%.1f\n", myFloatNum);   // Show 1 decimal place digit ..
    printf("%.2f\n", myFloatNum);
    printf("%.3f\n", myFloatNum);
    printf("%.4f\n", myFloatNum);

    // Rounding
    printf("%.2f\n", myFloatRound);
    printf("%.3f\n", myFloatRound);
    printf("%.0f\n", myFloatRound);

    return 0;
}

