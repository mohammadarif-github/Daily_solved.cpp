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
        string s;
        cin >> s;
        bool found = false;
        if (s == "e" || s=="YesYes" || s== "sYes" || s== "esY")
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < (s.size()-3); i++)
            {
                if(s.substr(i,3)=="esy")
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            for (int i = 0; i < (s.size()-4); i++)
            {
                if(s.substr(i,4)=="sYes")
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            for (int i = 0; i < (s.size()-6); i++)
            {
                if(s.substr(i,6)=="YesYes")
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }

    }
}
