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
#define mp map<ll, ll>

using namespace std;
int main()
{
    boost;
    int t;
    cin >> t ;
    while (t--)
    {
        string pi = "3141592653589793238462643383279";
        string str;
        cin >> str;
        int cnt = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == pi[i])
                cnt++;
            else
                break;
        }
        cout << cnt << "\n";
    }
}
