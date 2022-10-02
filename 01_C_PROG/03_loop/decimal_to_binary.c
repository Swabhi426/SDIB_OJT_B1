#include<stdio.h>
int main()
{
    int num,x;
    int i;
    printf("enter the num of which u want binary:\n");
    scanf("%d",&num);
    for(i=7;i>=0;i--)
    {
        x=(num>>i) & 0x1;
        printf("%d",x);
    }
}