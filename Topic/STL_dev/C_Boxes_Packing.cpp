#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e9 + 10;

void test_case()
{
    ll n, val;
    cin >> n;
    map<ll, ll> mp;
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        mp[val]++;
    }
    // cout << mx << "\n";
    for (auto i : mp)
    {
        if (i.second >= mx)
        {
            mx = i.second;
        }
    }
    cout << mx << "\n";
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