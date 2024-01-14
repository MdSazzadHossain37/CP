#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n, r;
    cin >> n >> r;
    bool f = false;
    vector<pair<ll, ll>> p;
    ll i, c;
    while (r--)
    {
        cin >> i >> c;
        p.push_back({i, c});
    }
    sort(p.begin(), p.end());
    // for (auto i : p)
    //     cout << i.first << " " << i.second << "\n";
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i - 1].first == p[i].first && p[i - 1].second == p[i].second)
        {
            f = true;
            break;
        }
    }
    if (f)
        cout << "impossible\n";
    else
        cout << "possible\n";
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
        cout << "Scenario #" << cs << ": ";
        test_case();
    }

    return 0;
}