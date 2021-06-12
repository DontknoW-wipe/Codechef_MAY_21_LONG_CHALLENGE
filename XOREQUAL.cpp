#include<bits/stdc++.h>
using namespace std;
#define po 1000000007
#define ll long long int
void find_power_in_less_time(ll base,ll n)
{
	ll res=1;
    while(n>0)
    {
        if(n%2==1)
        {
            res=(res*base)%po;
        }
        base=(base*base)%po;
        n=n/2;
    }
    cout<<res<<endl;

}
void solve()
{
	ll n;
	cin>>n;
	find_power_in_less_time(2,n-1);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
