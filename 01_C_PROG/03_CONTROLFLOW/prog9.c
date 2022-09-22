#include<stdio.h>
int main()
{
    float mark1,mark2,mark3;
    float total;
    float avg;
    printf("enter mark1:\n");
    scanf("%f",&mark1);
    printf("enter mark2:\n");
    scanf("%f",&mark2);
    printf("enter mark3:\n");
    scanf("%f",&mark3);
    total= mark1+mark2+mark3;
    avg=total/3;
    printf("AVG:%f\n",avg);
    if(mark1>=35 && mark2>=35 && mark3>=35){
        if(avg>70){
            printf("distinction\n");
            }
        else if(avg>60){
            printf("first class\n");
            }
        else if(avg>50){
            printf("second class\n");
            }    
        else if(avg>35){
            printf("third class\n");
            }
        else{
            printf("failed\n");
        }     
        printf("passed\n");  
    }
    else
        printf("failed.");
    
}