//wap to read an array of 10 integers and count total number of even and odd elemnt
#include<stdio.h>
int main()
{
    int num[10],i,count=0,count1=0;
    printf("enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
            count++;
        else
            count1++;
            
    }
    printf("total even number is:%d\n",count);
    printf("total odd number is:%d\n",count1);
} 