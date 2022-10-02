#include <stdio.h>

int main() 
{
   int s_id[10];
   int i;
   
   printf("enter the id of students\n");

   for(i = 0; i<10; i++)
   {
      scanf("%d",&s_id[i]);
   }  
      
   for(i = 0; i<10; i++)
   {
      printf("id is=%d address location=%d\n",s_id[i],&s_id[i]);
   }
}