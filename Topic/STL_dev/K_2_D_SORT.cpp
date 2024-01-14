#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool comparator(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.first > b.first)
        return false;
    if (a.first == b.first && a.second < b.second)
        return false;
    return true;
}
void test_case()
{
    ll n, x, y;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
    sort(v.begin(), v.end(), comparator);
    for (auto i : v)
        cout << i.first << " " << i.second << "\n";
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