#include<stdio.h>
int main()
{
    int x=15,k=35;
    printf("%d %d %d\n",x!=15,x=20,x<20); // right to left precedance
    printf("%d %d %d \n",k==35,k=50,k>40); //right to left
 
    
}