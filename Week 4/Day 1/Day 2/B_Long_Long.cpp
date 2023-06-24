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
        ll n, sum=0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                sum += (arr[i] * (-1));
            else
                sum += arr[i];
        }
        ll count = 0;
        ll j =0;
        bool flag = true ;
        for (ll i = 0; i < n; i++)
        {

            if (arr[i] < 0 && flag)
            {
                flag = false;
                count++;
                // cout << arr[i] << " ";
            }
            else if(arr[i] >0)
                flag = true;

        }
        cout  << sum << " "<< count << endl;
    }
}