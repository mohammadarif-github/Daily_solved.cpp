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
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0, j = 2; i < n / 2; i++, j += 2)
        {
            v[i] = j;
            sum += j;
        }
        // cout << sum << endl;
        int od = 0;
        bool ok = false;

        for (int i = n / 2, j = 1; i < n-1; i++, j += 2)
        {
            ok = true;
            od += j;
            v[i] = j;
            if (i == n - 2)
            {
                // cout << od << endl;
                if ((sum - od) % 2 && (sum - od) > j)
                {
                    v[i+1] = (sum-od);
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok  )
        {
            yes;
            for (auto it : v)
                cout << it << " ";
            cout << endl;
        }
        else
            no;
    }
}
