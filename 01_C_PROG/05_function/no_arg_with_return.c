#include<stdio.h>
char sum(void);
int main()
{
    char s;
    s=sum();
    printf("%c",s);
    
}
char sum()
{
    int b=7,c=6,sum=0;
    sum=b+c;
    return 'a'; //first return value is gonna execute
    return sum; //it wont gonna execute
}