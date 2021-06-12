#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int x,a,b;
    cin>>x>>a>>b;
    int res=a+(100-x)*b;
    res=res*10;
    cout<<res<<endl;
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
