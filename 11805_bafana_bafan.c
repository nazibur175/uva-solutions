#include<stdio.h>
int main()
{
int t,i,j,n,k,p;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  scanf("%d %d %d",&n,&k,&p);
  for(j=1;j<=p;j++)
  {
    if(n==k) k=0;
    k=k+1;
    
  }
  if(k==0){k=n;}
  printf("Case %d: %d\n",i,k);
  
}
return 0;
}