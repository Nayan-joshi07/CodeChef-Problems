#include<iostream>
#include<cmath>
#define LL long long
using namespace std;
void solve()
{
    LL c;
    cin>>c;
    LL a=0,b=0;
    int f = 1;
    int id = 0;
    for(int i=31;i>=0;i--)
    {
        if((1<<i)&c)
        {
            id = i;
            break;
        }
    }
    for(int i = id;i>=0;i--)
    {
        if((1<<i)&c)
        {
            if(f)
            {
                a |= (1<<i);
                f = 0;
            }
            else
            {
                b |= (1<<i);
            }
        }
        else
        {
            a |=(1<<i);
            b |=(1<<i);
        }
    }
    cout<<a*b<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}