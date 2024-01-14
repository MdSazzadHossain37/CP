#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (auto &i : v)
    {
        cin >> i;
        mp[i]++;
    }
    sort(v.begin(), v.end());
    ll ans = 0, val;
    for (int i = 0; i < n; i++)
    {
        val = v[i];
        if (mp[v[i]] != 0)
        {
            ans++;
            while (mp[val])
            {
                mp[val]--;
                val++;
            }
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    // cin.ignore();

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}