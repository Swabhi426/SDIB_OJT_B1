#include<stdio.h>
void fun(int,int);
int main()
{
    int x=5,y=7;
    printf("x=%d y=%d\n",x,y); //execute main function
    fun(x,y); //execute function defition
    printf("x=%d y=%d\n",x,y); //come back to original main function value 
}
void fun(int x,int y)
{
    x=7;
    y=5;
    printf("x=%d y=%d\n",x,y);
}