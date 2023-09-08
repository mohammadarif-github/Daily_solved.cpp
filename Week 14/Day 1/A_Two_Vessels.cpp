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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
            cout << 0 << endl;
        else
        {
            int cnt = 0;
            if (a > b)
            {
                while (a > b)
                {
                    if (a > b)
                    {
                        a -= c;
                        b += c;
                    }
                    else
                    {
                        b -= c;
                        a += c;
                    }

                    cnt++;
                }
            }
            else
            {
                while (a < b)
                {
                    if (a > b)
                    {
                        a -= c;
                        b += c;
                    }
                    else
                    {
                        b -= c;
                        a += c;
                    }

                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }
}