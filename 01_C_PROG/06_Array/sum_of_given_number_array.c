#include <stdio.h>

int main() 
{
   int a[10];
   int i,n,sum=0;
   
   printf("numbers\n");
   scanf("%d",&n);
   printf("enter the numbers\n");

   for(i = 0; i<n; i++)
   {
      scanf("%d",&a[i]);
      sum=sum+a[i];
   }  
   printf("%d",sum);
   
}