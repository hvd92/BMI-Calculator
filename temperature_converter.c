#include <stdio.h>

int main()
{
    int choice;
    float temp, result;

    do
    {
        printf("\n===== TEMPERATURE CONVERTER =====\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Celsius to Kelvin\n");
        printf("4. Kelvin to Celsius\n");
        printf("5. Fahrenheit to Kelvin\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6)
        {
            printf("Enter temperature: ");
            scanf("%f", &temp);
        }

        switch (choice)
        {
            case 1:
                result = (temp * 9 / 5) + 32;
                printf("Result: %.2f F\n", result);
                break;

            case 2:
                result = (temp - 32) * 5 / 9;
                printf("Result: %.2f C\n", result);
                break;

            case 3:
                result = temp + 273.15;
                printf("Result: %.2f K\n", result);
                break;

            case 4:
                result = temp - 273.15;
                printf("Result: %.2f C\n", result);
                break;

            case 5:
                result = (temp - 32) * 5 / 9 + 273.15;
                printf("Result: %.2f K\n", result);
                break;

            case 6:
                result = (temp - 273.15) * 9 / 5 + 32;
                printf("Result: %.2f F\n", result);
                break;

            case 7:
                printf("Thank you for using the converter!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);


    return 0;
}
