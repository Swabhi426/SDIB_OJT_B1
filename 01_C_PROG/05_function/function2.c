#include<stdio.h>
char fun();
int main()
{
    char ch;
    ch=fun();
    printf("character is:%c\n",ch);
}
char fun()
{
    char c;
    printf("enter a character:\n");
    scanf("%c",&c);
    return c;
}