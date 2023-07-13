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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int maxx = INT_MIN, idx = -1;
        for (int i = 0; i < n ; i++)
        {
            if (v[i] > maxx)
            {
                // cout << "entered " ;
                if ((v[i + 1] < v[i] && i+1<n) || (v[i - 1] < v[i] && i - 1 >= 0))
                {
                    maxx = v[i];
                    idx = i + 1;
                }
            }
        }
        cout << idx << endl;
    }
}
