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
typedef long long ll;
using namespace std;
vector<ll> v;

bool is_pal(int n)
{
    string s;
    s += to_string(n);
    int r = s.size() - 1, l = 0;
    while (l < r)
    {
        if (s[r] != s[l])
            return false;
        l++;
        r--;
    }
    return true;
}
int main()
{
    for (int i = 0; i < (1 << 15); i++)
    {
        if (is_pal(i))
            v.push_back(i);
    }
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        ll freq[35000] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < v.size(); j++)
            {
                ll x = v[j] ^ arr[i];
                if (x > (1 << 15))
                    continue;
                else 
                    ans += freq[x];
            }
        }
        cout << (ans + n) / 2 << endl;
    }

    return 0;
}
