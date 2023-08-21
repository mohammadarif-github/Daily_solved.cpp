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
bool is_pal(string s)
{
    int i = 0 ,j= s.size()-1;
    while (i<=j)
    {
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
void solve()
{
    string s;
    cin >> s;
    ll cnt = 0;
    while (1)
    {
        cnt++;
        ll sum = stoi(s);
        reverse(s.begin(), s.end());
        sum += stoi(s);
        string sr = to_string(sum);
        if (is_pal(sr))
        {
            cout << cnt << " " << sr << endl;
            return;
        }
        s = sr;
    }
}
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
