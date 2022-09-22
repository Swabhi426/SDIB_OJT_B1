#include<stdio.h>
int main()
{
    float celcius;
    int farenheit;
    printf("enter farenheit");
    scanf("%d",&farenheit);
    celcius= (farenheit-32)*5/9;
    printf("%f",celcius);

}