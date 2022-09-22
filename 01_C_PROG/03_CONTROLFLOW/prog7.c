#include<stdio.h>
int main()
{
    int a=10,b=2,temp;
    printf("befor if statement a=%d b=%d\n",a,b);
    if(a>b){
        a+=1;
        b+=1;
    }
    else{
        a+=10;
        b+=20;
    }
    printf("after if statement a=%d b=%d");
}