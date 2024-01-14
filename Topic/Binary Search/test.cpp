#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1, 0);
    ll cnt = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (v[i] != 1 && v[i * 2] != 1)
        {
            cnt++;
            v[i] = 1;
            v[i * 2] = 1;
        }
        else
        {
            continue;
        }
    }
    ll ans = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        if (v[i] == 1)
        {
            ans++;
            cout << i << " " << i * 2 << "\n";
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