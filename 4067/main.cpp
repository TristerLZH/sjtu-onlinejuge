#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
    char s[1000]={0},w[1000]={0};
    int i,j,k;
    i=1;
   cin>>s;
   for(i=0;i<=strlen(s)-1;i++)
   w[i+1]=s[i];
   w[0]='0';
   int sum=0;
    if(w[strlen(s)]-'0'+1>9)
    {
       w[strlen(s)]=w[strlen(s)]+1-10;
       sum=1;
    }
    else
    {
     w[strlen(s)]=w[strlen(s)]+1;
       sum=0;
    }
    for(i=strlen(s)-1;i>=0;i--)
    {
        if(w[i]-'0'+sum>9)
        {
            w[i]=(w[i]-'0'+sum)-10+'0';
       sum=1;
       continue;
        }
       if(w[i]-'0'+sum<=9)
           {
            w[i]=w[i]+sum;
            sum=0;
            continue;
        }
    }
    if(w[0]!='0')
    cout<<w;
    else for(i=1;i<=strlen(s);i++)
     cout<<w[i];
    return 0;
}
