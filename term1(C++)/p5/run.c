#include <stdio.h>
#include <conio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, number;
    printf("Enter count of elements: ");
    scanf("%d", &number);
    printf("%d", n2);   
    for (int i = 0; i < number; ++i)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    printf(" ...");
    getch();
    return 0;
}