//wap to print sum of individual row and column
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum_col,sum_row;
    printf("enter the elemnts of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sum_col=sum_row=0;
        for(j=0;j<3;j++)
        {
            
            sum_row=sum_row+a[i][j];
            sum_col=sum_col+a[j][i];
        }
        printf("sum of row is %d\n",sum_row);
        printf("sum of column is %d\n",sum_col);

    }

}