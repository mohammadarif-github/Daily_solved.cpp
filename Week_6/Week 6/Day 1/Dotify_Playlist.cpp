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
        int n,k,l;
        cin >> n >> k >> l;
        vector<pair<int,int>>v;
        for (int i = 0; i <n; i++)
        {
            int t,ln;
            cin >> t >> ln;
            if(ln==l)
            {
                v.push_back({ln,t});
            }
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int i = 0,sum=0;
        for( auto it:v)
        {
            // cout << it.first << " " << it.second << endl;
            if(i==k)break;
            sum+=it.second;
            i++;
        }
        if(sum && i==k)cout << sum << endl;
        else minus 
    }
    
}
