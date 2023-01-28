#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   vector<int>v;
   while(cin>>n)
   {
     if(n==0)
      return 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i];
      if( i != v.size()-1)
        cout<<" ";
    }

    cout<<endl;
    v.clear();

   }
}