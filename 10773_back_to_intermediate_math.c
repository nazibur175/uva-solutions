#include<stdio.h>
#include<math.h>
int main()
{
int t,i;
double d,v,u,t1,t2,dif;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  t1=0,t2=0;
   scanf("%lf %lf %lf",&d,&v,&u);
   if(v==0 || u==0 || v>=u)
   printf("Case %d: can't determine\n",i);

   else 
   {
   t1=d/sqrt((u*u)-(v*v));
   t2=d/u;
   dif=t1-t2;
   printf("Case %d: %.3lf\n",i,dif);
   }
} 
return 0;
}