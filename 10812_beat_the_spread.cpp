#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
   int m,n;
   cin>>m>>n;
   int a=(m+n)/2;
   int b=m-a;

   if((m+n)%2==1 || m<0 || n>m)
   {
    cout<<"impossible"<<endl;
   }
   
   else if(a>=0 && b>=0)
   {
    cout<<a<<" "<<b<<endl;
   }
   else 
   cout<<"impossible"<<endl;
  }
}