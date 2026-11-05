#include <stdio.h>

int main()
{
    int myNum = 15;             // myNum is 15
    myNum = 10;                 // Set myNum to 10

    int myOtherNum = 23;        // Set myOtherNum to 24
    int myOtherOtherNum;        // Unassigned

    // Assign the value of myOtherNum to myNum
    myNum = myOtherNum;

    // First assignment of uninitialised variable
    myOtherOtherNum = myNum;

    // Output the current value of myNum
    printf("%d, %d\n",myNum,myOtherOtherNum);

    // Adding values together
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);

    // Update a value using its current value
    x = x + 1;
    printf("%d\n", x);

    // Swap two variables
    int a = 5;
    int b = 10;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a is %d, b is %d\n",a, b);

    return 0;
}


