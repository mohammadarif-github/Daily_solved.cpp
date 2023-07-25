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
        int n;
        cin >> n;
        if (n % 2)
            minus;
        else
        {
            vector<int> od;
            vector<int> ev;

            for (int i = 1; i <= n; i++)
            {
                if (i % 2)
                    od.push_back(i);
                else
                    ev.push_back(i);
            }
            for (int i = 0; i < n / 2; i++)
            {
                cout << ev[i] << " " << od[i] << " ";
            }
            cout << endl;
        }
    }
}
