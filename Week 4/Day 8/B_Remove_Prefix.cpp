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
        int n;
        cin >> n;
        ll arr[n];
        map<ll,int>freq;
        for (int i = 0; i < n ; i++)
        {
            cin >> arr[i];
        }
        ll ans =0;
        for (int i = n-1; i >=0 ; i--)
        {
            freq[arr[i]]++;
            if(freq[arr[i]]>1)break;
            ans++;
        }
        cout << n-ans << endl; 
        
    }
    
}
