#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,idx=-2;
    cin >> n >> k;

    vector<pair<int,int>>ans;
    int in ,x;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        x = (in%k);
        if(x==0)x = k;
        ans.push_back({-x,i+1});
    }
    sort(ans.begin(),ans.end());
    for(int i =0;i<n;i++)cout << ans[i].second << " ";
    cout << endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int cs =1;
    cin >> cs;
    while (cs--)
    {
        solve();
    }
    
}