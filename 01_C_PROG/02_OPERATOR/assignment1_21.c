#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d %d\n",x,y);
}