#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    ll val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        mp[val]++;
    }
    ll ans = 0;
    for (auto i : mp)
    {
        if (i.second < i.first)
        {
            ans += i.second;
        }
        else
        {
            ans += abs(i.first - i.second);
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}