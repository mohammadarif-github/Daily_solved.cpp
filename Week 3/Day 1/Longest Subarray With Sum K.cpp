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
/*
 Problem link : https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
*/
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
     int n = a.size();
    long long int sum =0,ans=0;
    long long int j=0,i=0;
    while(j<n)
    {
        sum+=a[j];
        
        
        if(sum>k)
        {
            while(sum>k)
            {
                sum-=a[i];
                i++;
            }
        }
        if(sum==k)
            ans = max(ans,j-i+1);
        
        j++;
    }
    return ans;
}

int main()
{
    boost;
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for (int i = 0; i < n ; i++)
    {
        cin >> v[i];
    }
    cout << longestSubarrayWithSumK(v,k) << endl;
}
