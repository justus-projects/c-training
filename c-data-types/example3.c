
#include <stdio.h>

int main()
{
    // Numeric Types

    // Specify one as a whole number
    int myNumInt = 1000;
    printf("%d\n", myNumInt);

    // Specify a variable as a float.
    float myFloat = 5.75;
    printf("%f\n", myFloat);

    // Specify a variable as type double (myDouble)
    double myDouble = 19.99;
    printf("%lf\n\r", myDouble);

    // Scientific notication
    float f1 = 35e3;
    float d1 = 12e4;

    printf("%.2f\n", f1);
    printf("%lf\n", d1);
    return 0;
}
