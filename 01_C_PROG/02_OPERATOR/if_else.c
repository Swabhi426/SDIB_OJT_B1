#include<stdio.h>
int main()
{
    int r_age,s_age,a_age;
    printf("enter the age of ram:\n");
    scanf("%d",&r_age);
    printf("enter the age of shyam:\n");
    scanf("%d",&s_age);
    printf("enter the age of ajay:\n");
    scanf("%d",&a_age);
    if(r_age<s_age && r_age<a_age)
    {
        printf("ram is yongest");

    }
    else if(s_age<r_age && s_age<a_age)
    {
        printf("shyam is youngest");
    }
    else if(a_age<r_age && a_age<s_age)
    {

    printf("ajay is youngest"); 

    }
    


}