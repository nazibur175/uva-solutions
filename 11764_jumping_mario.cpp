#include<stdio.h>
int main()
{
int t,n,i,j,k,high,low,c;
scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
   scanf("%d",&n);

   int x[n];
    for(j=0;j<n;j++)
      { 
        scanf("%d",&x[j]);
      }
high=0,low=0;
    for(k=0;k<n-1;k++)
     {
        
        if(x[k+1]>x[k])
        {
        high=high+1;
        }
        else if(x[k+1]<x[k])
       {
        low=low+1;
       }
       else c++;
       }
   printf("Case %d: %d %d\n",i,high,low);
 }
return 0; 
}