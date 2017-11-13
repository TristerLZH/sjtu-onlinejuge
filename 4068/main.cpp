#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
    char s[100]={0};
    char a[100][100]={0};
  int i,j,k;
    cin>>k;
    cin>>s;
    int n=strlen(s)-1;
    int row=0;
    int col=0;
    int ans=0;
    while(ans<=n)
    {
        for(i=0;i<=k-1;i++)
        {
            a[i][col]=s[ans];
            ans++;
            if(ans>n) break;
        }
        for(i=k-2;i>=1;i--)
        {
            col++;
            a[i][col]=s[ans];
            ans++;
            if(ans>n) break;
        }
        col++;
    }
   for(i=0;i<=k-1;i++)
     for(j=0;j<=col;j++)
      if(a[i][j]!='\0') cout<<a[i][j];
    return 0;
}
