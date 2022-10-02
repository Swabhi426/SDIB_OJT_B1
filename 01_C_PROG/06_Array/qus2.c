//wapnto print one dimentional array in ascending order take size and the element of array from user
#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nenter in ascending order is: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}