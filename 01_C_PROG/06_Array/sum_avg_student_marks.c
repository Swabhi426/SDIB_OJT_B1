//wap to read marks of 5 students calculate sum and avg using array
#include<stdio.h>
int main()
{
    int i,n,marks[5];
    float sum=0;
    float avg;
    printf("enter the number of student:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the mark of student %d=\n",(i+1));
        scanf("%d",&marks[i]);
        sum=sum+marks[i];

    }
    avg=sum/5;
    printf("sum of marks:%f\n",sum);
    printf("avg of the marks:%f",avg);

}