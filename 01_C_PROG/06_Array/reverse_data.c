#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter the elemnts:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse of array is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}