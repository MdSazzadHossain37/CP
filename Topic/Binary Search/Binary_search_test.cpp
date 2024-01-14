#include <bits/stdc++.h>
#define ll long long
using namespace std;

mt19937 rng(0);
bool exists(vector<int> &vc, int x)
{
    int l = 0, r = vc.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (vc[mid] == x)
            return true;
        if (vc[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return false;
}

int get_random(int l, int r)
{
    return l + (rng() % (r - l + 1));
}
void test_case()
{
    int n = 101;
    vector<int> vc;
    for (int i = 0; i < n; i++)
    {
        vc.push_back(get_random(-100, 100));
    }
    sort(vc.begin(), vc.end());
    for (auto elem : vc)
    {
        if (!exists(vc, elem))
        {
            cout << "Danger!\n";
        }
    }
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