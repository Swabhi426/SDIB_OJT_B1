#include<stdio.h>
int main()
{
    int a[2][3],i,j,n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("the array is:\n");        
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)        
            printf("%d\n",a[i][j]);        
}