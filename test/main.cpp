#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int p(int n);
int main()
{



cout<<p(5);

}
int p(int n)
{
   int i,a1=0,a2=1,tmp;
   for(i=3;i<=n;i++)
   {
       tmp=a2;
       a2=a1+a2;
       a1=tmp;
   }
return a2;
}
