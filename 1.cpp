#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
      if (i % 2 == 0)
      {
        a[i]=a[i-1]+a[i-1];
      }
      else if (i % 2 != 0)
      {  int s=rand()%50+1;
         while(a[i-1]%s!=0)
         {
              s=rand()%50+1; 
         }
         a[i]=s;
      }
    }
    for(int i=1;i<=n;i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
