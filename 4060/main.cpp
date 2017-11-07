#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
 int p[100]={0},D[100]={0};
 int n,i,sum=0;
 cin>>n;
 for(i=1;i<=n;i++)
 cin>>p[i];
 if(n==1)
 {
     cout<<p[1];
     return 0;
 }

 if(n%2==0)
 {
     for(i=n;i>=3;i=i-2)
     sum=sum+p[i];
     cout<<sum+(n-2)/2*(2*p[2]+p[1])+p[2];
 }
 if(n%2==1)
 {
     for(i=n;i>=4;i=i-2)
     sum=sum+p[i];
     cout<<sum+(n-3)/2*(2*p[2]+p[1])+p[2]+p[1]+p[3];
 }
  return 0;
}
