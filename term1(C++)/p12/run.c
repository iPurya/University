#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("Shanbe");
        break;
    case 2:
        printf("Yekshanbe");
        break;
    case 3:
        printf("Doshanbe");
        break;
    case 4:
        printf("Seshanbe");
        break;
    case 5:
        printf("Chaharshanbe");
        break;
    case 6:
        printf("Panjshanbe");
        break;
    case 7:
        printf("Jome");
        break;
    }
    getch();
    return 0;
}
