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
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            x++;
        else if (s[i] == 'L')
            x--;
        else if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;

        if (x == 1 && y == 1)
        {
            yes;
            return;
        }
    }
    no;
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
