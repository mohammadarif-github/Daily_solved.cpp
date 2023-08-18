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
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus cout << -1 << endl;

using namespace std;
int main()
{
    boost;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<string>s;
        for (int i = 0; i < n; i++)
        {
            string st;
            cin >> st;
            s.insert(st);
        }
        int q;
        cin >> q ;
        for (int i = 0; i < q; i++)
        {
            string st;
            cin >> st;
            if(s.find(st)!=s.end())yes;
            else no;
        }
        
    }
    
}
