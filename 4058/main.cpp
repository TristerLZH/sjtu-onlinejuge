#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
bool judge(char c)
{
     if(c>='A'&&c<='Z') return true;
    if(c>='a'&&c<='z') return true;
     if(c>='0'&&c<='9') return true;
     return false;
}
int main()
{
    freopen("a.txt","r",stdin);
    int n,i=0,j,k;
    char s[1000]={0};
    int  a[1000]={0};
    cin>>n;
    cin>>s;
   //cin.getline(s,1000,'\n');
    for(i=0;i<=strlen(s)-1;i++)
    if(judge(s[i])) a[int(s[i])]++;
    for(i=0;i<=25;i++)
    {
         if(a[i+int('A')]>0&&a[i+int('a')]==0)
     {
         a[i+int('A')]=0;
         a[i+int('a')]=1;
         continue;//without this you will do a dangerous work in te next line.you just swap them back,it is meaningless.

     }
        if(a[i+int('a')]>0&&a[i+int('A')]==0)
     {
         a[i+int('a')]=0;
         a[i+int('A')]=1;
     }

    }

   for(i=1;i<=n;i++)
    for(j=200;j>=0;j--)
    if(a[j]>0) cout<<char(j);


    return 0;
}
