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
        int n, k;
        cin >> n >> k;
        if (k < -(n - 1) || k > (n + 1))
            minus;

        else
        {
            int ans = 1;
            string s;
            if (k > 0)
            {
                for (int i = 0; i < n; i++)
                {

                    if (ans == k)
                    {
                        s += '*';
                    }
                    else
                    {
                        ans += 1;
                        s += '+';
                    }
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (ans == k)
                    {
                        s += '*';
                    }
                    else
                    {
                        ans -= 1;
                        s += '-';
                    }
                }
            }
            cout << s << endl;
        }
    }
}
