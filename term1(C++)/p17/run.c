#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[20];

    printf("Enter number: ");
    scanf("%s", str);

    printf("Output : %s", strrev(str));
    getch();
    return 0;
}