//wap to read the values from user and copy into another array
#include<stdio.h>
int main()
{
    int a[50],c[50],i,n;
    printf("enter the number of elemnets:\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    printf("copy of an array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
}