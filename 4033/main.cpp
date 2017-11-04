#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b;
    if(a<0||a>10000||b<1||b>12)
    {

          cout << "Error! " ;
          return 0;
    }
    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
    {
        cout<<31;
        return 0;
    }
    if(b==4||b==6||b==9||b==11)
    {
        cout<<30;
        return 0;
    }
    if(b==2)
    {
        if(a%100!=0&&a%4==0)
        {
            cout<<29;
            return 0;
        }
        if(a%400==0)
        {
            cout<<29;
            return 0;
        }
        cout<<28;
        return 0;

    }

    return 0;
}
