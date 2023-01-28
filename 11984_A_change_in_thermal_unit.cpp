#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    double c,x;
    cin>>c>>x;
    c=c+(x/1.8);
    //cout.precision(4)<< c  <<endl;
    printf("Case %d: %.2lf\n",i,c);
  }
}