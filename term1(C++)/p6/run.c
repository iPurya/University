#include <stdio.h>
#include <conio.h>
int main()
{
    int i =0 ,x,y,ex_x;
    printf("\nEnter numbers (n1,n2):");
    scanf("%d,%d",&x,&y);
    ex_x = x;
    while (x>=y)
    {
        x -= y;
        i++;
    }    
    printf("\n(Quotient) %d/%d=%d",ex_x,y,i);
    printf("\n(Surplus) %d%%%d=%d",ex_x,y,x);
    getch();
    return 0;
}
