#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch >=65 && ch<=122){
        printf("it is alphabet\n");
    }
    else{
        printf("it is not an alphabet\n");
    }
}