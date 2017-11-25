#include <iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;
void ff(char* s, char ch)
{
    int num=0;
    while(s[num]!='\0')
    {
        while(s[num]==ch)
        {
            for(int i=num;s[i]!='\0';i++)
             s[i]=s[i+1];
        }
        num++;
    }
}
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
           strcpy(s[num],s1);
           num++;
       }
   }
    num--;
    for(int i=0;i<=num;i++)
    ff(s[i],ch);
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

