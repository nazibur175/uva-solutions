#include<iostream>
using namespace std;
int main()
{
  int n;
  int count=1;
  while(scanf("%d",&n))
  {
    if(n==0)
      return 0;
    int a[n];
    int sum=0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
    int ans = 0;
		int avg = sum / n;
		for (int i = 0; i < n; i++) {
			if (a[i] > avg)
				ans += a[i] - avg;
		}
    
    printf("Set #%d\nThe minimum number of moves is %d.\n\n", count, ans);
    count++;
  }
}