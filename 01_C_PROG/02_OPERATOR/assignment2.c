#include<stdio.h>
int main()
{
    int mark;
    printf("enter the mark:\n");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100)
        printf("grade is O");
    else if(mark>=80)
        printf("grade is E");
    else if(mark>=70)
        printf("grade is A");
    
    else if(mark>=60)
        printf("grade is B");
    else if(mark>=50)
        printf("grade is C");
    else if(mark>=40)
        printf("grade is D");
    else
        printf("grade is F");
}

