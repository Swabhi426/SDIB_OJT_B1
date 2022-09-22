#include<stdio.h>
int main()
{
    int radius,len,bre;
    float area_rect,area_cir;
    printf("enter the length of rect:\n");
    scanf("%d",&len);
    printf("enter the breadth of rect:\n");
    scanf("%d",&bre);
    printf("enter the radius of circle:\n");
    scanf("%d",&radius);
    area_rect=len*bre;
    area_cir=3.14*radius*radius;
    printf("%f\n",area_rect);
printf("%f\n",area_cir);
    

}