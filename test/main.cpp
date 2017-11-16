#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cassert>
using namespace std;
int main()
{
char *s[3]={"a","vv","cc"};
char **p;
int *p1;
int x=15;
p1=&x;
(*p1)++;
cout<<*p1;

for(p=s;p<s+3;p++)
cout<<**p<<endl;
}
