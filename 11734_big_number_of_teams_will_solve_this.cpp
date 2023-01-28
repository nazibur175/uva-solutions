#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  getchar();
  for(int i=1;i<=t;i++)
  {
    string s1,s2,temp1,temp2;
    getline(cin,s1);
    getline(cin,s2);

    if(s1==s2)
      {
        printf("Case %d: Yes\n",i);
        continue;
      }
    
    for(int m=0;m<s1.size();m++)
    {
      if(s1[m]!=' ')
        {
            temp1.push_back(s1[m]);
        }

    }   
    for(int m=0;m<s2.size();m++)
    {
        if(s2[m]!=' ')
        {
            temp2.push_back(s2[m]);
        }
    }

    if(temp1==temp2)
        printf("Case %d: Output Format Error\n",i);
    else 
      printf("Case %d: Wrong Answer\n",i);

  }
}