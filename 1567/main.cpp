#include <iostream>
using namespace std;
int main()
{
    char ch;
    int n;
    int i=1,j=1;
    cin>>ch>>n;
    for(i=1;i<=(n+1)/2;i++)
     {
         for(j=1;j<(n+3)/2-i;j++)
         cout<<" ";
           for(j=(n+3)/2-i;j<=(n-1)/2+i;j++)
         cout<<ch;
          for(j=(n-1)/2+i+1;j<=n;j++)
         cout<<" ";
         cout<<endl;
     }
         for(i=(n+3)/2;i<=n;i++)
         {
            for(j=1;j<(1-n)/2+i;j++)
         cout<<" ";
           for(j=(1-n)/2+i;j<=(3*n+1)/2-i;j++)
         cout<<ch;
          for(j=(3*n+1)/2-i+1;j<=n;j++)
         cout<<" ";
         cout<<endl;
         }

    return 0;
}
