#include<stdio.h>
int main()
{
    int a=0,b=1,c=-1, result;
    float x=2.5,y=0.0;
    printf("\n a=%d,b= %d,a>b= %d\n",a,b,a>b);
    printf("\n b=%d,c= %d,x=%f,(b/c)<x= %d\n",b,c,x,(b/c)<x);
    printf("a=%d,b=%d,c= %d, a<=b>=c= %d\n",a,b,c,a<=b>=c);
    printf("a=%d,x=%f,b= %d, a<=x==b= %d\n",a,x,b,a<=x==b);
    result=-x+a==y>c<=b;

} 