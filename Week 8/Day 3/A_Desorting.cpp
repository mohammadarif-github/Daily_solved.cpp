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
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mini = INT_MAX;
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] <= v[i + 1])
            {
                ok = true;
            }
            else 
            {
                ok = false;
                break;
            }
        }
        if (!ok)
            cout << 0 << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                mini = min(mini, abs(v[i] - v[i + 1]));
            }
            if (mini == 0)
                cout << 1 << endl;
            else
                cout << (mini / 2) + 1 << endl;
        }
    }
}
