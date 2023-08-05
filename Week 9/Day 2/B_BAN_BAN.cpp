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
        int x = 1,cnt=0;
        if (ans > 1)
        {
            for (int i = 1; i <= ans ; i++)
            {
                cout << x << " " << x + 1 << endl;
                cnt ++;
                
            }
        }
        // BANBANBAN
        // BANBAN
        
        {
            cout << x + 1 << " " << x + 5 << endl;
        }
    }
}
