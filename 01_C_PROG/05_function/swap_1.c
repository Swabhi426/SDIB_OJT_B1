#include<stdio.h>
int swap(int ,int );
// int a=10,b=20; //global variable
                //it will not still work as in the definition part it will still vanished although it is local or global var
int swap(int a,int b) //formal arg
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping: a = %d and b = %d\n", a, b); 
}
int main()
{
    int x,y;
    printf("enter the two number\n");
    scanf("%d %d",&x,&y);
    swap(x,y); //actual arg //it will swap two num till the definition code will executed // after this statement it will vanish off
    printf("\nActual value: a = %d and b = %d\n", x, y); 
}