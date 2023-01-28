#include<stdio.h>
int main()
{
 int i,t;
 scanf("%d",&t);
 int d1,m1,y1,d2,m2,y2,age;
 for(i=1;i<=t;i++)
 {
    scanf("%d/%d/%d",&d1,&m1,&y1);
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if(d1<d2)
    {
      d1=d1+30;
      m2=m2+1;
    }
    if(m1<m2)
    {
      m1=m1+1;
      y2=y2+1;
    }
    age=y1-y2;
    if(age<0)
    {
      printf("Case #%d: Invalid birth date\n",i);
    }
    else if(age>130)
    {
      printf("Case #%d: Check birth date\n",i);
    }
    else
    {
      printf("Case #%d: %d\n",i,y1-y2);
    }
 }
return 0;
}