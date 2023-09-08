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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll ans = 0;
        ll a = n;

        ll lcm = (x * y) / gcd(x, y);

        ll cd = n / lcm;

        ll k = (n / x);
        ans += (n * k);
        ans -= (k * (k - 1)) / 2;
        a = n - (k - 1);
        ans -= (cd * a);
        ll z = n / y;
        ans -= (cd * (cd - 1)) / 2;
        if(z-cd>0)ans-=((z-cd)*((z-cd)+1))/2;
        cout << ans << endl;
    }
}