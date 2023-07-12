/*

    Author :--
    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!
    |                                         |
    |                                         |
    |  cout<< "MOHAMMAD ARIFUL ISLAM"<< endl  |
    |                                         |
    |                                         |
    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!

*/
#include <bits/stdc++.h>
#define boost                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl;

using namespace std;
void solve()
{
    ll n;
    cin >> n;
    if(n%2==0)
    {
        yes;
        return;
    }
    while (n%2)
    {
        n/=2;
    }
    if(n>1)yes;
    else no ;
    return;
}
int main()
{
    boost;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
