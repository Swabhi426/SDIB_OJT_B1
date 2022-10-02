#include<stdio.h>
void fun(int *,int *);
int main() // calling function
{
    int x=5,y=7;
    printf("x=%d y=%d\n",x,y); // 5,7
    fun(&x,&y); //7,5  execute function defition
    printf("x=%d y=%d\n",x,y); //7,5 called pointer address 
}
void fun(int *x,int *y) //called function
{
    *x=7;
    *y=5;
    printf("x=%d y=%d\n",*x,*y);
}