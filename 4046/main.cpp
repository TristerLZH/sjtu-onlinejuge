#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
    int a[11][11];
    int m,n,i,j;
    cin>>m>>n;
    cout<<n<<" "<<m<<endl;
    for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
      cin>>a[i][j];
      for(j=1;j<=n;j++)
      {
          for(i=m;i>=1;i--)
        cout<<a[i][j]<<" ";
        cout<<endl;
      }

    return 0;
}
