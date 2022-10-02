//wap a simple ,if user enter "hi" then output print "hello" else print "not enter hi"
#include<stdio.h>
int main()
{
    
    int i;
    char a[20];
    printf("enter the string\n");
    for(i=0;i<2;i++)
    {
       printf("\n enter the element a[%d] :",i);
        scanf("%s",a);
        printf("\n value after adding is %s\n",a);
    }
    if(a[0]== 'h'&& a[1]=='i')
    {
        printf("hello\n");
    }
    else
    {
        printf("not enter hi\n");
    }
        
}