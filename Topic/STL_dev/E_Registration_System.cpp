#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e9 + 10;

void test_case()
{
    ll n;
    cin >> n;
    string s;
    map<string, ll> mp;
    while (n--)
    {
        /* code */
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
        {
            cout << "OK\n";
        }
        else
        {
            cout << s << mp[s] - 1 << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    //  cin.ignore();

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}