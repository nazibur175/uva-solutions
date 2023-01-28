#include<stdio.h>
int main()
{
int t,i,t1,t2,fi,at,ct1,ct2,ct3,avg,total;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  avg=0,total=0;
 scanf("%d%d%d%d%d%d%d",&t1,&t2,&fi,&at,&ct1,&ct2,&ct3);
 if(ct1<=ct2 && ct1<=ct3) avg=(ct2+ct3)/2;
 else if(ct2<=ct1 && ct2<=ct3) avg=(ct1+ct3)/2;
 else avg=(ct1+ct2)/2;
 total=t1+t2+fi+at+avg;

 if(total>=90) printf("Case %d: A\n",i);
 else if(total>=80) printf("Case %d: B\n",i);
 else if(total>=70) printf("Case %d: C\n",i);
 else if(total>=60) printf("Case %d: D\n",i);
 else printf("Case %d: F\n",i);
}
return 0;
}