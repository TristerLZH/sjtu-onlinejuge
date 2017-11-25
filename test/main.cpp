#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;
double x,x1,x2;
double fx(double x)
{
    double c;
    c=3*x*x*x-4*x+6;
    return(c);
}

double root(double x1,double x2)
{
    do{
    double k,b;
    k=(fx(x1)-fx(x2))/(x1-x2);
    b=fx(x1)-k*x1;
    x=-b/k;
    cout<<x<<endl;
    if(fx(x)*fx(x1)>=0)x1=x;
    if(fx(x)*fx(x2)>=0)x2=x;}
    while(fabs(x1-x2)>0.00001);
    //while(fx(x)<-0.00001||fx(x)>0.00001);
}

int main()
{
    while(fx(x1)*fx(x2)>=0)
    {
        scanf("%lf%lf",&x1,&x2);
    }
    root(x1,x2);
    printf("%f",x);
    return 0;
}
