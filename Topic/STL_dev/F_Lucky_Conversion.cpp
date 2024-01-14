#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    string a, b;
    cin >> a >> b;
    // cout << a << " " << b << "\n";
    int x = 0, y = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < b[i])
            x++;
        else if ((a[i] > b[i]))
            y++;
    }
    cout << max(x, y) << "\n";
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