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
        int in;
        cin >> in;
        vector<vector<int>> v(in);
        int s_minn = INT_MAX, minn = INT_MAX;
        for (int i = 0; i < in; i++)
        {
            int n, x;
            cin >> n;
            while (n--)
            {
                cin >> x;
                v[i].push_back(x);
            }
            sort(v[i].begin(), v[i].end());
            if (v[i].size() > 1)
                s_minn = min(s_minn, v[i][1]);
            minn = min(minn, v[i][0]);
        }
        ll sum = 0;
        bool found = true;
        for (int i = 0; i < in; i++)
        {
            if (v[i].size() > 1)
            {
                if (v[i][1] == s_minn && found)
                {
                    sum += minn;
                    found = false;
                }
                else
                    sum += v[i][1];
            }
            else
                sum += v[i][0];
        }
        cout << sum << endl;
    }
}
