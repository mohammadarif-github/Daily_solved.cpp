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
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s[0]=='1')cout << 13 << endl;
        else if(s[0]=='2')cout << 23 << endl;
        else if(s[0]=='3')cout << 37 << endl;
        else if(s[0]=='4')cout << 41 << endl;
        else if(s[0]=='5')cout << 53 << endl;
        else if(s[0]=='6')cout << 67 << endl;
        else if(s[0]=='7')cout << 73 << endl;
        else if(s[0]=='8')cout << 83 << endl;
        else if(s[0]=='9')cout << 97 << endl;
    }
    
}
