#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    ll first = 0, second = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            first = lower_bound(v.begin(), v.end(), (v[i] + v[j])) - v.begin();
            // ll temp = v[i]+v[j];
            second = upper_bound(v.begin(), v.end(), v[j]) - v.begin();
            ans += abs(second - first);
            // cout << first << " " << ans << "\n";
        }
    }
    cout << ans << "\n";
}

// 3 4 5 9 12
// 1 2 3 4 5 6
// 100 121 211 212
// a, b, c  a+b>c
// 1 2 5
/*
3 5
a+b>c, a+c>b, b+c>a
 c>0 and c<a+b;
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}