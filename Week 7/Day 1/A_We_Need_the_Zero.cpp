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
#define minus cout << -1 << endl

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
            cin >> v[i];
        bool found = false;
        for (int i = 0; i < (1 << 8); i++)
        {
            vector<int> a = v;
            for (int j = 0; j < n; j++)
            {
                a[j] = a[j] ^ i;
            }
            int x = a[0];
            for (int j = 1; j < n; j++)
            {
                x = x ^ a[j];
            }

            if (x == 0)
            {
                cout << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
            minus;
    }
}
