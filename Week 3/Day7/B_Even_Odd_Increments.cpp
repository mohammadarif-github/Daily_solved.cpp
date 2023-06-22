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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n , q;
        cin >> n >> q;
        ll arr[n];
        ll ev=0,od=0,ev_sum=0,od_sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2)
            {
                od_sum+=arr[i];
                od++;
            }
            else 
            {
                ev_sum+=arr[i];
                ev++;
            }
        }
        ll sign,add;
        for (ll i = 0; i < q ; i++)
        {
            ll ans =0;
            cin >> sign >> add;
            if(sign == 0 )
            {
                ans=od_sum+ev_sum+(ev*add);
                if(add%2)
                {
                    od_sum+=ev_sum;
                    od_sum+=(ev*add);
                    od+=ev;
                    ev_sum = 0;
                    ev=0;
                }
                else 
                {
                    ev_sum+=(ev*add);
                }
            }
            else if(sign==1)
            {
                ans=od_sum+(od*add)+ev_sum;
                if(add%2)
                {
                    ev_sum+=od_sum;
                    ev_sum+=(od*add);
                    ev+=od;
                    od_sum = 0;
                    od=0;
                }
                else 
                {
                    od_sum+=(od*add);
                }
            }
            cout << ans << endl;
        }
        
        
    }
    
}
