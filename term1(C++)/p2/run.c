#include <stdio.h>
int main()
{
    int res, number;
    char repeat;
    do
    {
        printf("Enter Number: ");
        scanf("%d", &number);
        res = 0;
        for (int i = 1; i <= number - 1; ++i)
        {
            if (number % i == 0)
                res += i;
        }
        if (res == number)
            printf("Number %d is Tom",number);
        else
            printf("Number %d isn't Tom",number);

        printf("\nContinue ? [Y/n]: ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}
