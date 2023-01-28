#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    long long x[81];
    
    x[0] = 1; x[1] = 1;
    
    for(int i = 2;i <= 80;i++){
        x[i]=x[i-1]+x[i-2];
    }
    while(cin>>N){
        if(N == 0) break;
        printf("%lld\n",x[N]);
    }
    return 0;
}