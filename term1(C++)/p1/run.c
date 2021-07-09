#include <stdio.h>
#include <conio.h>
int main()
{
    int student_count;
    printf("Enter count of students: ") ;
	scanf("%d",&student_count) ;
    int max1s = 0,max2s = 0,max1id = 0,max2id = 0,tmps,tmpid;
    for (int i=0; i<student_count; i++)
    {
        printf("\nEnter student id and score (id,score): ");
        scanf("%d,%d",&tmpid,&tmps);
        if (tmps > max1s){
            max2s = max1s;
            max2id = max1id;
            max1s = tmps;
            max1id = tmpid;
        } else if (tmps < max1s && tmps > max2s){
            max2s = tmps;
            max2id = tmpid;
        }
        
    }
    printf("\n#2 Student Id : %d - Score : %d",max2id,max2s);
    getch();
    return 0;
}