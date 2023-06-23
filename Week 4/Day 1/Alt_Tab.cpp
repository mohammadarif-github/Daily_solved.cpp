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
    stack<string> st;
    string s;
    while (t--)
    {
        cin >> s;
        st.push(s);
    }
    map<string, bool > freq;
    string ans;
    while (!st.empty())
    {
        string top = st.top();
        if (!freq[st.top()])
        {
            cout << st.top().substr(st.top().size() - 2);
            freq[st.top()]=true;
        }
        st.pop();
    }
    // cout << ans << endl;
}
