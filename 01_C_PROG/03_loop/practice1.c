#include<stdio.h>
int main()
{
    int num1,num2,x,y;
    int i,z;
    printf("enter the num of which u want binary:\n");
    scanf("%d",&num1);
    printf("enter the num2 of which u want binary:\n");
    scanf("%d",&num2);
    for(i=7;i>=0;i--)
    {
        x=(num1>>i) & 0x1;
        
        y=(num2>>i) & 0x1;
         
    }
    z= (num1 & num2 ) & 0x1;
        printf("%d",z);
    
   
}