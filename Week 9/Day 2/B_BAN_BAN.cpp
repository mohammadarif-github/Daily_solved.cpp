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
        ll ans = n / 2 + (n % 2);
        cout << ans << endl;
        int i = 1, j = n * 3;
        for (int k = 0; k < ans; k++)
        {
            
            cout << i << " " << j << endl;
            i += 3;
            j -= 3;
        }
    }
}
