#include<stdio.h>
void sum(void);
int main()
{
    sum();
}
void sum() //function header
{  
    int a,b,sum;
    printf("enter two num:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is:%d",sum);

}