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
bool is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k, ans;
        cin >> n >> k;
        if (is_prime(n))
        {
            k -= (n * 2);
            ans = 1 + ceil((double)k / 2);
        }
        else
        {
            if (n % 2)
            {
                k -= (n+3);
                ans = 1 + ceil((double)k / 2);
            }
            else
            {
                k -= (n + 2);
                ans = 1 + ceil((double)k / 2);
            }
        }
        cout << ans << endl;
    }
}
