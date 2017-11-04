#include<iostream>
#include<cstring>
#include<cstdio>
#include<ctime>
#include<algorithm>
using namespace std;
bool visit[2000001];
int prime[2000001];
 int M;

void table()
{
    memset(visit,true,sizeof(visit));
    int num = 0;
    for (int i = 2; i <= M; ++i)
    {
        if (visit[i] == true)
        {
            num++;
            prime[num] = i;
        }
        for (int j = 1; ((j <= num) && (i * prime[j] <= M));  ++j)
        {
            visit[i * prime[j]] = false;
            if (i % prime[j] == 0) break;
        }
    }
}

int main()
{
cin>>M;
    memset(prime, 0, sizeof(prime));
    int count = 0;
    table();
    for(int i = 0; i <= M; ++i)
        if(prime[i])
           printf("%d ",prime[i]);

}
