#include<stdio.h>
int main()
{
long long int a,b,r1=0,r2=0,c=0;
int carry;
while((scanf("%lld%lld",&a,&b))==2)
{ 
  r1=0,r2=0,c=0,carry=0;
  if(a==0 && b==0)
            break;
  while(a>0 || b>0)
  {
    r1=a%10;
    a=a/10;
    r2=b%10;
    b=b/10;
    
    c=(c+r1+r2)/10;
    carry=carry+c;
  }
 if(carry==0)
            printf("No carry operation.\n");
else if(carry==1)
            printf("1 carry operation.\n");
else 
   printf("%d carry operations.\n",carry);
}
return 0;
}