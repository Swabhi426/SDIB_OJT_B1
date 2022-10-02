#include<stdio.h>
int main()
{
    int num1,x,j;
    int i,z;
    printf("enter the num of which u want binary:\n");
    scanf("%d",&num1);
    j=num1& 0xF8;
    for(i=3;i>=0;i--)
    {
        x=(j>>i) & 0x1;
        printf("%d",x);
    }
    
}     