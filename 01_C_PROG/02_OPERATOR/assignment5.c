#include<stdio.h>
int main()
{
    int num;
    printf("enter a num");
    scanf("%d",&num);
    printf("%d",(num & 0x0F)>>4 | (num & 0x0F)<<4);
}