//wap to print transpose of a matrix
#include<stdio.h>
int main()
{
    int a[3][3],i,j,transpose[3][2];
    printf("enter the element of the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

}