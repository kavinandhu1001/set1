
#include<stdio.h>
#include<conio.h>
int main()
{
int a,i,n,count=0;
scanf("%d",&n);
while(n>0)
{
    a=n%10;
    printf("%d",a);
    n=n/10;
}
}
