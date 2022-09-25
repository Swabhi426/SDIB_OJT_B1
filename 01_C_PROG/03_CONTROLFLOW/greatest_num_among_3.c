#include<stdio.h>
int main()
{
    int no1,no2,no3;
    printf("enter the three num:\n");
    scanf("%d %d %d",&no1,&no2,&no3);
    if(no1>no2 && no1>no3){
        printf("%d is greater",no1);
    }
    else if(no2>no1 && no2>no3){
        printf("%d is greater",no2);
    }
    else if(no3>no1 && no3>no2){
        printf("%d is greater",no3);
    }
    
}