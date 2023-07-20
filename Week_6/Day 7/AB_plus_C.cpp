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
const int N = 10e6;
using namespace std;
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 1)
            cout << -1 << endl;
        else
        {
            if (x <= N)
                cout << 1 << " " << 1 << " " << x - 1 << endl;
            else if (x > N && (x % N != 0))
            {
                cout << N << " " << x / N << " " << x % N << endl;
            }
            else
                cout << N << " " << (x / N) - 1 << " " << N << endl;
        }
    }
}
