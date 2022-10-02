//wap to read two arrays of size 5 & store sum of these arrays into third array
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("enter the element of first array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element of second array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("third array is:\n");
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }
}