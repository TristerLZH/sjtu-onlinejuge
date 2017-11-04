#include <iostream>
using namespace std;
int i,n,num=0,j;
int m(int h)
{
    int sum=0;
    while(h!=0)
    {
        if(h%2==1) sum++;
        h/=2;
    }
    return sum;
}
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>j;
        num+=m(j);
    }
    cout<<num;
    return 0;
}
