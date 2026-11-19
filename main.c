#include <stdio.h>

void takeinput();
float targetweight(float w, float meter, float bmi);
void again();

int main()
{
    takeinput();
    return 0;
}

void takeinput()
{
    float feet, inches, meter, bmi, w, res;

    printf("Enter your weight (KG): ");
    scanf("%f", &w);

    printf("Enter your height (feet): ");
    scanf("%f", &feet);

    printf("Enter your height (inches): ");
    scanf("%f", &inches);

    meter = (feet * 12 + inches) * 0.0254;

    if (w <= 0 || meter <= 0)
    {
        printf("Invalid weight or height.\n\n");
        again();
        return;
    }

    bmi = w / (meter * meter);

    if (bmi < 18.5)
    {
        res = targetweight(w, meter, bmi);

        printf("You are underweight.\n");
        printf("You need approximately %.1f kg more weight.\n", res);
    }
    else if (bmi <= 24.9)
    {
        printf("Your weight is normal. You are perfect!\n");
    }
    else
    {
        res = targetweight(w, meter, bmi);

        printf("You are overweight.\n");
        printf("You need to lose approximately %.1f kg.\n", res);
    }

    printf("\n");

    again();
}

float targetweight(float w, float meter, float bmi)
{
    if (bmi < 18.5)
    {
        return 18.5 * (meter * meter) - w;
    }
    else
    {
        return w - 24.9 * (meter * meter);
    }
}

void again()
{
    int a;

    printf("Tap 1 to run again\n");
    printf("Tap 2 to exit\n");
    scanf("%d", &a);

    if (a == 1)
    {
        takeinput();
    }
    else
    {
        printf("Thanks for using our program!");
    }
}
