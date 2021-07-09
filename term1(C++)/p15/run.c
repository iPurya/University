#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 6; j++)
            printf("$");
        printf("\n");
    }
    getch();
    return 0;
}
