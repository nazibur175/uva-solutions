#include<stdio.h>
int main()
{
int t,i,j,n,sum,k;
float above_avg,avg;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  scanf("%d",&n);
  {
    int x[n];
    sum=0;
    for(j=0;j<n;j++)
    {
       scanf("%d",&x[j]);
       sum=sum+x[j];
    }
    above_avg=(float)sum/n;
    sum=0;
    k=0;
    for(j=0;j<n;j++)
    {
      if(x[j]>above_avg)
        {
          k=k+1;
        }
      avg=(float)k/n;
    }
    printf("%.3f%\n",avg*100);
  }
}
return 0;
}