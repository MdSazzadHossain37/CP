#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e9 + 10;

void test_case()
{
    ll n;
    cin >> n;
    vector<string> v;
    string s;
    while (n--)
    {
        cin >> s;
        auto it = find(v.begin(), v.end(), s);
        if (it != v.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            v.push_back(s);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    //  cin.ignore();

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}