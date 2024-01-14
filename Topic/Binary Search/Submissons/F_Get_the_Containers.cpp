#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool possible(vector<ll> &v, ll m, ll mid)
{
    ll sum = 0, cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if ((sum + v[i] < mid))
        {
            sum += v[i];
        }
        else
        {
            cnt++;
            sum = v[i];
        }
    }
    cnt++;
    return cnt <= m;
}

void test_case()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    ll sum = 0, mx = 0;
    for (auto &i : v)
    {
        cin >> i;
        sum += i;
        mx = max(mx, i);
    }
    ll left = mx, right = sum;
    while (left < right)
    {
        ll mid = left + (right - left + 1) / 2;
        if (possible(v, m, mid))
        {
            right = mid - 1;
        }
        else
        {
            left = mid;
        }
    }

    cout << left << "\n";
}
/*
5+15=20/2
->10
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