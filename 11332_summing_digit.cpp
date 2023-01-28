#include<stdio.h>
int main()
{
long long int n,x,sum1;
int sum2,sum3;
 while(scanf("%lld",&n)!=EOF)
 { 
   sum1=0;
   sum2=0;
   sum3=0;
   if(n==0) break;
   else
   {
     while(n>0)
     {
        x=n%10;
        n=n/10;
        sum1=sum1+x;
     }
     x=0;
     while(sum1>0)
     {
        x=sum1%10;
        sum1=sum1/10;
        sum2=sum2+x;
     }
     x=0;
     while(sum2>0)
     {
        x=sum2%10;
        sum2=sum2/10;
        sum3=sum3+x;
     }
     printf("%d\n",sum3);
     }
   }
return 0;
}