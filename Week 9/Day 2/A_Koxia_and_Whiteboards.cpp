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
        list<int> l;
        int n, m;
        ll sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            l.push_back(a);
            sum += a;
        }
        l.sort();
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            sum-=l.front();
            l.pop_front();
            l.push_front(a);
            sum+=a;
            l.sort();
        }
        cout << sum << "\n";
    }
    
}
