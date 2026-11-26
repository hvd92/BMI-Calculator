#include <stdio.h>

float calculateBill(int units)
{
    float bill;

    if (units <= 100)
        bill = units * 3.0;
    else if (units <= 200)
        bill = 300 + (units - 100) * 5.0;
    else
        bill = 800 + (units - 200) * 7.0;

    return bill;
}


int main()
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid units");
    }
    else
    {
        bill = calculateBill(units);
        printf("Total bill = Rs. %.2f", bill);
    }

    return 0;
}
