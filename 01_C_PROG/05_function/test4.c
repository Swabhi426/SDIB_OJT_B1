#include<stdio.h>
int main()
{
    int a=10;
    void f();
    a=f();
    printf("%d\n", a);
    return 0;
}
void f()
{
    printf("Hi");

}