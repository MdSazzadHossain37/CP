#include <bits/stdc++.h>
#define ll long long
using namespace std;

int get_random(int l, int r)
{
    return l + (rand() % (r - l + 1));
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
    for (auto i : vc)
        cout << i << " ";
    cout << "\n";
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