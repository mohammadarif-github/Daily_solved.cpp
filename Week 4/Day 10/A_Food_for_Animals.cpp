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
        int df, cf, un, d, c;
        cin >> df >> cf >> un >> d >> c;

        df -= d;
        cf -= c;
        bool possible = true;
        
        int x=0;
        if(df<0)x+=df;
        if(cf<0)x+=cf;
        // cout << x << endl;
        if(x!=0)x += un;
        if (x < 0)
            no;
        else
            yes;
    }
}
