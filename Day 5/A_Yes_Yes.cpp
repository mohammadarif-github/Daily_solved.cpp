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
        string c,s;
        for (int i = 0; i < 20 ; i++)
        {
            c+="Yes";
        }
        
        cin >> s;
        
        if (c.find(s)!=-1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
