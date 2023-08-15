#include <bits/stdc++.h>
#define boost                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
typedef long long ll;
using namespace std;
// ll N = 1e9+5;
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
    // ll N = 1e9 + 5;
    int t;
    cin >> t;

    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        // ll freq[N] = {0};
        ll arr[n + 1];
        ll maxx = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] > i)
            {
                ans = arr[i]-i;
                maxx = max(maxx,ans);
            }
        }

        cout << maxx << endl;
    }

    return 0;
}