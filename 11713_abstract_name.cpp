#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  getchar();
  while(t--)
  {
    string s1,s2,temp1,temp2;
    getline(cin,s1);
    getline(cin,s2);
    int l1=s1.size();
    int l2=s2.size();
    if(l1==l2)
    {
        for(int m=0;m<l1;m++)
    {
      if(s1[m]!='a' && s1[m]!='e' && s1[m]!='i' && s1[m]!='o' && s1[m]!='u')
        {
            temp1.push_back(s1[m]);
        }

    }   
    for(int m=0;m<l1;m++)
    {
        if(s1[m]!='a' && s1[m]!='e' && s1[m]!='i' && s1[m]!='o' && s1[m]!='u')
        {
            temp2.push_back(s2[m]);
        }
    }
    if(temp1==temp2)
         cout<<"Yes"<<endl;
    else 
      cout<<"No"<<endl;
    }
    else 
     cout<<"No"<<endl;
    
  }
}