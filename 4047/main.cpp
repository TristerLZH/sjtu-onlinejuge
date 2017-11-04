#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    bool prime[2000001]={0};
    int n,i,j;
    double f;
    scanf("%d",&n);
    f=sqrt(n*1.0);
   prime[0]=prime[1]=0;prime[2]=1;
     for(int i=3;i<=n;i++)
        prime[i]=i%2;
     int t=(int)sqrt(n*1.0);
     printf("%d ",2);
     for(int i=3;i<=n;i++)
     if(prime[i])
         {printf("%d ",i);
           if(i>f) continue;
            else for(int j=i*i;j<=n;j+=2*i)//ÓÅ»¯
            prime[j]=0;}


}
