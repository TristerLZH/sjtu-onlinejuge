#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
    bool flag=true;
    char s[1000]={0};
    cin>>s;
    char c;
    cin>>c;
    char *p=s;
    for(int i=0;*(p+i)!='\0';i++)
    {
    if(*(p+i)==c)
    {cout<<i<<" ";
    flag=false;}
    }
    if(flag) cout<<"NULL";
    return 0;
}
