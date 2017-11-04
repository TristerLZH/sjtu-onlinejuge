#include <iostream>
using namespace std;
double a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a<b+c&&b<a+c&&c<a+b)
    {
        if((a*a==b*b+c*c)+(b*b==a*a+c*c)+(c*c==b*b+a*a)==1)
        cout<<1;
        else cout<<0;
        return 0;
    }
   cout<<-1;
    return 0;
}
