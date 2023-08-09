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
        sort(v.begin(), v.end());
        int sum = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum == 0)
            {
                ok = false;
                break;
            }
        }
        if (!ok)
        {
            sort(v.begin(), v.end(), greater<int>());
            sum = 0;
            ok = true;
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                if (sum == 0)
                {
                    no;
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
        {
            yes;
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
}
