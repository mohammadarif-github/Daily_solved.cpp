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
Problem Link : https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
*/
int longestKSubstr(string s, int k)
{
    int freq[26] = {0};
    int unq = 0, i = 0, j = 0, ans = -1;
    int n = s.size();
    string add;
    while (j < n)
    {
        add += s[j];
        if (freq[s[j] - 'a'] == 0)
            unq++;
        freq[s[j] - 'a']++;
        if (unq > k)
        {
            while (unq > k)
            {
                freq[s[i] - 'a']--;
                if (freq[s[i] - 'a'] == 0)
                    unq--;
                i++;
            }
        }
        else if (unq == k)
        {
            ans = max(ans, j - i + 1);
        }
        j++;
    }

    return ans;
}
int main()
{
    boost;
    string s;
    int k;
    cin >> s >> k;
    cout << longestKSubstr( s, k) << endl;
}
