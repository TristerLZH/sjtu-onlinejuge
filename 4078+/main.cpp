#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
struct student
{
    char name[30];
    int a;
    int b;
    int c;
};
bool compare(student a1,student a2)
{
    if(a1.a+a1.b+a1.c>a2.a+a2.b+a2.c) return true;
    if(a1.a+a1.b+a1.c<a2.a+a2.b+a2.c) return false;
    else
    {

    if(a1.a>a2.a) return true;
    if(a1.a<a2.a) return false;
    if(a1.a==a2.a)
    {
          if(a1.b>a2.b) return true;
    if(a1.b<a2.b) return false;
    if(a1.b==a2.b)
       {
             if(a1.c>a2.c) return true;
           if(a1.c<a2.c) return false;
        if(a1.c==a2.c)
        {
            if(strcmp(a1.name,a2.name)>0) return false;
            else return true;
        }
       }
    }
}

    }

student d[1200];
int main()
{

    int n;
    int i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>d[i].name;
        cin>>d[i].a;
        cin>>d[i].b;
        cin>>d[i].c;
    }
    cin>>k;
    //sort(d+1,d+1+n,compare);
    for(i=1;i<=n-1;i++)
    {
       bool flag=false;
     for(j=1;j<=n-i;j++)
        if(!compare(d[j],d[j+1]))
         {
             student tmp;
             tmp=d[j];
             d[j]=d[j+1];
             d[j+1]=tmp;
             flag=true;
         }
         if(!flag) break;
    }
  // for(i=1;i<=n;i++)
  // cout<<d[i].name<<endl;
    cout<<d[k].name<<" ";
   cout<<d[k].a+d[k].b+d[k].c;
    return 0;
}
