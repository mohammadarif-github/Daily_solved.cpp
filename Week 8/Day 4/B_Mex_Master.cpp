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
        int n, maxx = INT_MIN, in, cnt = 0,z_cnt=0;
        cin >> n;

        vector<int> v;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            if (1)
            {
                cnt++;
                v.push_back(in);
            }
        }
        sort(v.begin(), v.end());
        // if (z_cnt <= (cnt - 1 + 2) && z_cnt)
        //     cout << 0 << endl;
        // else
        {
            int i = 0,j = n - 1;
            while (i <= j)
            {
                if (i == j)
                    ans.push_back(v[i]);
                else
                {
                    ans.push_back(v[i]);
                    ans.push_back(v[j]);
                }
                i++;
                j--;
            }
            int mini = INT_MAX,maxx = INT_MIN;
            for (int i = 0; i < n-1 ; i++)
            {
                // cout << v[i] << " ";
                int x = ans[i]+ans[i+1];
                mini = min(x,mini);
                maxx = max(x,maxx);
            }
        cout  << mini << "  " << maxx  << endl;
        // cout << endl;
        }

    }
}
