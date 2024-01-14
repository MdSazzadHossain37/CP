#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll get_trailing_zeros(ll n)
{
    ll count = 0;
    ll base = 5;
    while (n >= base)
    {
        count += n / base;
        base *= 5;
    }
    return count;
}

ll first_occurence(ll target)
{
    ll l = 0, r = LLONG_MAX / 2;
    while (l < r)
    {
        ll m = l + (r - l) / 2;
        if (get_trailing_zeros(m) < target)
        {
            l = m + 1;
        }
        else
            r = m;
    }
    return l;
}
void test_case()
{
    ll n;
    cin >> n;
    ll get = first_occurence(n);
    ll check = get_trailing_zeros(get);
    if (n != check)
        cout << "impossible\n";
    else
        cout << get << "\n";
}

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