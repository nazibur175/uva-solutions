#include<stdio.h>
int main()
{
int t,n,i;
long long int x;
scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
   x=0;
  scanf("%d",&n);
  x=(((((((n*567)/9)+7492)*235)/47)-498)/10);
  if(x<0){x=(-1*x);}
  printf("%lld\n",x%10);
}
return 0;
}