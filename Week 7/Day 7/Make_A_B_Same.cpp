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
        vector<int> ans(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }

        int x = 0;
        if (v[0] == 0)
            x++;
        if ((v[0] != ans[0]) || (v[n - 1] != ans[n - 1]))
            no;
        else
        {
            bool ok = true;
            for (int i = 1; i < n - 1; i++)
            {

                if (v[i] == 0)
                    x++;
                if (ans[i] == 1 && cnt == n)
                {
                    cout << v[i] << " " << i << endl;

                    ok = false;
                    no;
                    break;
                }
                else if (ans[i] == 0 && (v[i] != 0 || (cnt - x) < 0 || x == 0))
                {
                    cout << v[i] << " " << i << endl;
                    ok = false;
                    no;
                    break;
                }
            }

            if (ok)
                yes;
        }
    }
}
