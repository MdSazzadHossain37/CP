#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll count_target_element(ll n, ll m, ll M)
{
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += min(1LL * m, (M / i));
    }
    return cnt;
}

void test_case()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll left = 1, right = 1LL * m * n;
    while (left < right)
    {
        ll M = left + (right - left) / 2;
        ll cnt = count_target_element(n, m, M);
        if (cnt < k)
        {
            left = M + 1;
        }
        else
            right = M;
    }
    cout << left << "\n";
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
