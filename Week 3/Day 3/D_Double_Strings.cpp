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
        map<string, int> freq;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            bool exist = false;
            for (int j = 0; j < v[i].size(); j++)
            {
                string s1 = v[i].substr(0, j);
                string s2 = v[i].substr(j, v[i].size());
                if (freq[s1] > 0 && freq[s2] > 0)
                {
                    exist = true;
                    break;
                }
            }
            if (exist)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
       
    }
}
