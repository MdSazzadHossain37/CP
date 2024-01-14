#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    string s;
    cin >> s;
    ll nb, ns, nc, pb, ps, pc, cb = 0, cs = 0, cc = 0, r;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            cb++;
        else if (s[i] == 'S')
            cs++;
        else
            cc++;
    }
    // cout << cb << " " << cs << " " << cc << "\n";
    ll left = 0, right = 10000000000000;
    ll ans;
    while (left <= right)
    {
        ll mid = (left + right + 1) >> 1;
        ll cost = (max(0LL, (cb * mid) - nb) * pb) + (max(0ll, (cs * mid) - ns) * ps) + (max(0ll, (cc * mid) - nc) * pc);
        if (cost <= r)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << ans << "\n";
}
/*
BBBSSC
6 4 1
1 2 3
4

*/

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