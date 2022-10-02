//table of a number
#include<stdio.h>
int main()
{
    int i,num,table;
    printf("enter the num whose table u want : \n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        table=num*i;
        printf("%d * %d = %d\n",num,i,table);
    }
}