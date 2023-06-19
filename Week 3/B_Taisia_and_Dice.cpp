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
#define mp map<ll, ll>

using namespace std;
int main()
{
    boost;
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        // cout << s - r << " ";

        vector<int> a(n, 1);
        int cmax = s - r;
        a[n - 1] = cmax;
        int tot = n - 1 + cmax;
        int ind = 0;
        while (tot < s)
        {
            a[ind]++;
            tot++;
            ind++;
            if (ind == n - 1)
                ind = 0;
        }

        for (int i : a)
            cout << i << " ";
        cout << "\n";
    }
}
