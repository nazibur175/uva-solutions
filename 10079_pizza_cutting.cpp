#include<stdio.h>
int main()
{
  long int n,i,pieces;
 while(scanf("%lld",&n)!=EOF)
 {
   if(n<0) break;
   pieces=1;
   for(i=1;i<=n;i++)
   {
     pieces=pieces+i;
   }
   printf("%lld\n",pieces);
 }
return 0;
}