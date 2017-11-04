#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    bool flag;
    freopen("a.txt","r",stdin);
    int i,j,k,num=0,i1=0,j1=0;
    char s[10001];
    cin>>s;
    for(i=0;i<strlen(s)-1;i++)
     for(j=strlen(s)-1;j>i;j--)
          if(s[j]==s[i])
           {
               flag=true;
               for(k=1;2*k<=j-i;k++)
                if(s[i+k]!=s[j-k])
                {
                    flag=false;
                    break;
                }
                if(flag)
                {
                  if(num<j-i+1)
                   {
                       num=j-i+1;
                       i1=i;j1=j;
                   }
                }

           }
           if(num==0)
           {
                cout<<num;
                return 0;
           }
         else{
         cout<<num<<endl;
         for(i=i1;i<=j1;i++)
         cout<<s[i];}
    return 0;
}
