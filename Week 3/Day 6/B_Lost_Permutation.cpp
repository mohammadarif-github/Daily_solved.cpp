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
        int n, s;
        cin >> n >> s;
        int arr[n];
        map<int, int> freq;
        int maxx = INT_MIN;
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
            sum+=arr[i];
            maxx = max(arr[i], maxx);
        }
        sum+=s;
        int j=0,temp=0;
        for (int i = 1; i <= sum; i++)
        {
            temp+=i;
            if(temp==sum)
            {
                if(i>=maxx){
                    yes;
                    break;
                    // found = true;
                }
            }
            else if(temp>sum)
            {
                no;
                break;
            }
        }
        
    }
}
