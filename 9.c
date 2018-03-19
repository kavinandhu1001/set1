#include<stdio.h>
int main()
{
    int i,n,k,j;
    printf("enter the range");
    scanf("%d %d",&i,&n);
    int count;
    for(k=i;k<n;k++)
    {count=0;
        for(j=0;j<k;j++)
        {
            if(k%i==0)
            
                count++;
            
        }
        if(count==0)
        
            printf("%d \t",k);
        
    }
return 0;}
