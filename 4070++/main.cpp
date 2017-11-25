#include <iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
   char *s[35];
   char ch;
   int num=0;
   char s1[40]={0};
   cin>>ch;
   while(1)
   {
       cin>>s1;
       if(s1[0]=='@') break;
       else
       {
           s[num]=new char[strlen(s1)+1];
           int ans=0;
           for(int i=0;i<=strlen(s1);i++)
           {
            if(s1[i]!=ch)
            {
                         *(s[num]+ans)=s1[i];
                         ans++;
            }
           }
           num++;
       }
   }
    num--;
     for(int i=1;i<=num;i++)
     for(int j=0;j<num-i+1;j++)
        if(strcmp(s[j],s[j+1])<0)
           {
               char *tmp=s[j];
               s[j]=s[j+1];
               s[j+1]=tmp;
           }
         for(int i=0;i<=num-1;i++)
          cout<<s[i]<<endl;
          cout<<s[num];
    return 0;
}

