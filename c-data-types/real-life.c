
#include <stdio.h>

int main()
{
    // Create variables of different data types
    int items = 5;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %c%.2f\n", currency, cost_per_item);
    printf("Total cost = %c%.2f\n", currency, total_cost);

    return 0;
}
