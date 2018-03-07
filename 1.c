
#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main() {
   char str[100], tem;
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      tem= str[i];
      str[i] = str[j];
      str[j] = tem;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
   return (0);
}
