#include<stdio.h>
int main()
{
   
   char a[100],b[100];
   int i,j,count;
   printf("enter the string");
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;i!='\0';i++)
   {
        if(a[i]!=b[i]);
           {
               count++;
           }
       
    }
       if(count==1)
       {
           printf("yes");
       }
       else
       {
           printf("no");
       }
       
   
}
