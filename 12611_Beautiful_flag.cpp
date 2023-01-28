#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int  r,l1,l2,w;
    cin>>r;
    l1=(r*9)/4;
    l2=(r*11)/4;
    w=(3*r)/2;
    printf("Case %d:\n",i);
    printf("%d %d\n",-l1,w);
    printf("%d %d\n",l2,w);
    printf("%d %d\n",l2,-w);
    printf("%d %d\n",-l1,-w);
    

  }
}