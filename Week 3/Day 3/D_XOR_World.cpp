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

ll Xor(ll n) 
{
    if(n%4==0)return n;
    if(n%4==1)return 1;
    if(n%4==2)return n+1;
    else return 0;
} 
int main()
{
    boost;
    ll  a, b;
    cin >> a >> b;
    if (a == 0)
        cout << b << endl;
    else
        cout <<( Xor(a-1) ^ Xor(b)) << endl;
}
