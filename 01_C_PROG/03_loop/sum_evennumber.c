#include<stdio.h>
int main()
{
    int sum=0;
    int num,i;
    printf("Enter the number upto which you want sum of even numbers:\n");
    scanf("%d",&num);
    for(i=0;i<=num;i+=2)
    { 
       sum+=i;

    }
    printf("sum is=%d",sum);
}