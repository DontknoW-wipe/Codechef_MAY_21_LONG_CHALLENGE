#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,x,k;
    cin>>n>>x>>k;
    if((n+1-x)%k==0||x%k==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // return 0;
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
