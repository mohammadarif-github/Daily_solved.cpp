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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n >> s;
        bool zl = false, ra = false;
        int cnt_0 = 0,cnt_1 = 0 ;
        for (int i = 0; i < n ; i++)
        {
            if(s[i]=='0')cnt_0++;
            else cnt_1++;
        }
        int mini = min(cnt_0,cnt_1);
        if (mini%2)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }
}
