#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k,h,ans;
    cin>>n;
    cout<<n<<"=";
        for(i=2;i<=n;i++)
        {
            ans=0;
              if(n%i==0)
              {
                  ans++;
                  n=n/i;
                  while(n%i==0)
                  {
                      ans++;
                      n=n/i;
                  }
                  cout<<i<<"("<<ans<<")";
              }
              if(n==1) break;
        }


    return 0;
}
