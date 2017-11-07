#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
    int maxx=0;
    int n,num,i,pos;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>num;
        if(num>maxx)
        {maxx=num;
         pos=i;
        }
    }
    cout<<maxx<<" "<<pos;
  return 0;
}
