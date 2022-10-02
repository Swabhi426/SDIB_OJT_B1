#include<stdio.h>
void recur(int);
int main()
{
    int n=10;
    printf("\nNumbers from 1 To 10 are: ");
    recur(n);
    return 0;
}
void recur(int n) //passing by value
{
    if(n)
        recur(n-1);
    else
        return;
    printf("\n%d\n",n);
    return;
}