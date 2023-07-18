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
        string s;
        cin >> s;
        int x = (s[0] - '0') * 10 + (s[1] - '0'), y = (s[3] - '0') * 10 + (s[4] - '0');
        
        // cout << x << " " << y << endl;

        if (x < 13 && y < 13)
            cout << "BOTH" << endl;
        else if (x < 13)
            cout << "MM/DD/YYYY" << endl;
        else
            cout << "DD/MM/YYYY" << endl;
    }
}
