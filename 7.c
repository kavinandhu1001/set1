#include<stdio.h>
int main()
{
   
   char a[100],t;
   int i,j;
   printf("enter the string");
   scanf("%s",a);
   for(i=0;i<=strlen(a);i++)
   {
       j=i+1;
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       i++;
   }
       printf("%s",a);
       
   
}
