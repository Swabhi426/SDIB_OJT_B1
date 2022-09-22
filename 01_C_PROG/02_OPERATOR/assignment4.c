#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("enter the num:\n");
    scanf("%d",&num);
    while(num>0)
    {
        if(num & 1)
        {
            count++;
        }
        num=num>>1;
    }
    printf("%d",count);
}