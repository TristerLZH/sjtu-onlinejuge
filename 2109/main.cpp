#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
double dd(int x,int y)
{
       return (x*x)/(4*y) ;
}
double N;
int k,i,j,ans,fff=0;
int b,c,a[1000001];
int main()
{
    freopen("a.txt","r",stdin);
    scanf("%lf",&N);
    for(i=0;i<=N-1;i++)
    scanf("%d",&a[i]);
      scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        ans=0;
            scanf("%d",&b);
                 scanf("%d",&c);
        for(j=0;j<=min(dd(b,c),N-1);j++)
        {
            if(a[j]<=dd(b,c))
        ans++;
        }
        printf("%d\n",ans);
    }
    fclose(stdin);
    return 0;
}
