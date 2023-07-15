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
        string s;
        int n;
        cin >> n >> s;
        bool zl = false, ra = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                if (!zl)
                {
                    zl = true;
                    ra = false;
                }
                else if(!ra)
                {
                    ra = true;
                    zl = false;
                }
                i++;
            }
        }
        if (zl)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }
}
