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
int main()
{
    boost;
    int t;
    cin >> t;
    while (t--)
    {
        int n, sz, d;
        cin >> n >> sz >> d;
        string s;
        for (int i = 0; i < d; i++)
        {
            s += char('a' + i);
        }
        string ans;
        for (int i = 0; i < n ; i+=d)
        {
            ans += s;
        }
        for (int i = 0; i < n ; i++)
        {
            cout << ans[i] ;
        }
        
        cout << endl;
    }
}
