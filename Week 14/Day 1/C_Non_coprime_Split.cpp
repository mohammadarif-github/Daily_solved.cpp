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
        int x, y;
        cin >> x >> y;
        bool found = false;
        for (int i = x; i <= y; i++)
        {
            if (i % 2 == 0 && i != 2)
            {
                cout << i / 2 << " " << i / 2 << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            if (x == y)
            {
                int i = 2;
                while (i*i<=x)
                {
                    if (__gcd(i, x - i) != 1)
                    {
                        cout << i << " " << x - i << endl;
                        found = true;
                        break;
                    }
                    i++;
                }
            }
        }
        if(!found)minus
    }
}