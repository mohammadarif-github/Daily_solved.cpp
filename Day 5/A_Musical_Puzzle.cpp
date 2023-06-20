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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> fr;
        string s, temp;
        cin >> s;
        int j = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            temp += s[i];
            j++;
            if (j == 2)
            {
                // count++;
                // cout << temp << " ";
                if (fr[temp] == 0)
                {
                    fr[temp]++;
                    count++;
                    // cout << temp << " ";
                    // cout << count << " ";
                }
                temp.clear();
                j = 0;
                i--;
            }
        }
        cout << count  << endl;
        // cout << endl;
    }
}
