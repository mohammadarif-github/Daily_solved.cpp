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
Problem Link : https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
*/
int lenOfLongSubarr(int A[], int N, int K)
{
    long long sum = 0;
    int i = 0, ans = 0;
    unordered_map<ll, int> map;

        while (i < N)
    {
        sum += A[i];
        if (sum == K)
        {
            ans = max(ans, i + 1);
        }
        else if (map.find(sum - K) != map.end())
        {
            int indx = i - map[sum - K];
            ans = max(ans, indx);
        }
        if (map.find(sum) == map.end())
            map[sum] = i;
        i++;
    }
    return ans;
}
int main()
{
    boost;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << lenOfLongSubarr(arr, n,k) << endl;
}
