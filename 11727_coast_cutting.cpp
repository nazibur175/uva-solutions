#include<stdio.h>
int main()
{
int n,i,a,b,c;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
    {
      if(b>c) printf("Case %d: %d\n",i,b);
      else printf("Case %d: %d\n",i,c);
    }
else if(b>a && b>c)
    {
      if(a>c) printf("Case %d: %d\n",i,a);
      else printf("Case %d: %d\n",i,c);
    }
    else
    {
      if(a>b) printf("Case %d: %d\n",i,a);
      else printf("Case %d: %d\n",i,b);
    }
}
return 0;
}