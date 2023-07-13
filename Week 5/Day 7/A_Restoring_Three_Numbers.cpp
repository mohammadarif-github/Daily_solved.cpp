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
    {
        int n = 4;
        vector<int>v(n);
        for (int i = 0; i < 4 ; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int x = v[3]-v[0];
        int y = abs(x-v[1]);
        int z = abs(x-v[2]);
        cout << x << " " << y << " " << z << endl;
        
    }
    
}
