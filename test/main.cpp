#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int &f(int a[],int j);
int main()
{
      int* const p=NULL;
     *p++;
    //cout<<x<<" "<<y;

}
int &f(int a[],int j)
{
    return a[j];
}
