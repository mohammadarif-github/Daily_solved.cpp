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
    int n, k;
    int cs = 1;
    while (cin >> n >> k)
    {
        if (n == 0 && k==0)
            break;
        cout << "CASE# " << cs << ":" << endl; 
        cs++;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int x;
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if(it!=v.end() && v[it-v.begin()]==x)
                cout << x << " found at " << (it - v.begin()) +1 << endl;
            else cout << x << " not found" << endl;
        }
    }
}
