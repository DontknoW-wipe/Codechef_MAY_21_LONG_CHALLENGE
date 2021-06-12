#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	ll n,m;
 	cin>>n>>m;
 	ll c=0;
 	ll sap[n+1];
 	for(ll i=0;i<=n;i++) sap[i]=1;

 	for(ll i=0;i<=n;i++)
 	{
 		if(i<=1) continue;
 		c+=(sap[m%i]);
 		for(ll j=m%i;j<=n;j+=i)
 		{
 			sap[j]++;
 		}
 	// 	for(ll i=0;i<=n;i++)
		// {
		// 	cout<<sap[i]<<" ";
		// } 	
		// cout<<endl;
 	}
 	cout<<c<<endl;
}
int main()
{	speed_karo
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
