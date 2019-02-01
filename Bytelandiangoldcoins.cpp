#include<bits/stdc++.h>
using namespace std;
long maxcoin(long x)
{
    long m=x;
    if((m/2+m/3+m/4)<=x)
        return m;
    else
    {
        m=max(m,(maxcoin(m/2)+maxcoin(m/3)+maxcoin(m/4)));
    }
    return m;

}
int main()
{
    long n,res;
    while(cin>>n)
    {
        res=maxcoin(n);
        cout<<res<<endl;
    }

}
