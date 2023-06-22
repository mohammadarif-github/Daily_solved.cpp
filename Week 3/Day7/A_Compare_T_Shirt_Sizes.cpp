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
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
            cout << "=" << endl;
        else
        {
            char c1 = s1[s1.size() - 1];
            char c2 = s2[s2.size() - 1];
            if (c1 == 'M' && c2 == 'S')
                cout << ">" << endl;
            else if (c1 == 'S' && (c2 == 'M' || c2 == 'L'))
                cout << "<" << endl;
            else if (c1 == 'M' && c2 == 'L')
                cout << "<" << endl;
            else if (c1 == 'L' && (c2 == 'M' || c2 == 'S'))
                cout << ">" << endl;
            else if (c1 == 'S' && c2 == 'S')
            {
                if(s1.size()<s2.size())
                    cout << ">" << endl;
                else 
                    cout << "<" << endl;
            }
            else if (c1 == 'L' && c2 == 'L')
            {
                if (s1.size() < s2.size())
                    cout << "<" << endl;
                if (s1.size() > s2.size())
                    cout << ">" << endl;
            }
        }
    }
}
