#include<stdio.h>
int fibo(int n)
{
    if (n==0)
    {
      return 0 ;
    }
    if (n==1)
    {
        return 1;
    }
    
    else
    {
        return(fibo(n-1)+fibo(n-2));
    }
    }
    int main()
    {
        int term,i,n=0;
        printf("how many terms do you have:-");
        scanf("%d",&term);
        for (i  = 0; i < term; i++)
        {
          printf("%d\t",fibo(n));
          n++;
        
        }
     return 0;   
    }
    
    
