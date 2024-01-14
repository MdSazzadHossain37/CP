#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n;
    cin >> n;
    vector<ll> v, a;
    ll val;
    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        if (val < i)
        {
            v.push_back(i);
            a.push_back(val);
        }
    }
    sort(v.begin(), v.end());
    // for (auto i : v)
    //     cout << i << " ";
    // cout << "\n";
    ll ans = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        ans += lower_bound(v.begin(), v.end(), a[i]) - v.begin();
        // cout << ans << " ";
    }
    cout << ans << "\n";
}
/*
{1 2}
{2 3}
{3 4}
{2 6}
{1 7}
{4 8}
*/
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