#include <iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
int i;
bool flag=false;
    int a,b;
void jjj(int n)
{
    char s[100];
    sprintf(s,"%d",n);
    int sum=0;
    for(int j=0;j<=strlen(s)-1;j++)
    sum=int(s[j]-48)*int(s[j]-48)*int(s[j]-48)+sum;
    if(sum==n)
    {cout<<n<<endl;flag=true;}
    return;
}
int main()
{

    cin>>a>>b;
    if(a<=0||b<=0||a>b)
    {
        cout<<"error";
        return 0;
    }
    for(i=a;i<=b;i++)
    jjj(i);
    if (flag) return 0;
    else
    { cout<<"no";
        return 0;}

}
