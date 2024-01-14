#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n, k, a, b;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    while (k--)
    {
        cin >> a >> b;
        ll first, second;
        first = lower_bound(v.begin(), v.end(), a) - v.begin();
        second = upper_bound(v.begin(), v.end(), b) - v.begin();
        // cout << first << " " << second << " :";
        cout << second - first << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        cout << "Case " << cs << ":\n";
        test_case();
    }

    return 0;
}