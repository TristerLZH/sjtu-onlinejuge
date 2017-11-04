#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
    int n,d,a,b,c,i,num=0;
    cin>>a>>b>>n;
    for(i=1;i<=n;i++)
    {
         cin>>c;
         if(c<=a+b) num++;
    }
    cout<<num;
    fclose(stdin);
    return 0;
}
