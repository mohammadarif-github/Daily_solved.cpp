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
//  problem link : https://codeforces.com/contest/1692/problem/A
using namespace std;
int main()
{
    boost;
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,x,count=0;
        // cin >> n;
        cin >> a;
        for (int i = 0; i <3; i++)
        {
            cin >> x;
            if(x>a)count++;
        }
        cout << count << endl;
    }
}
