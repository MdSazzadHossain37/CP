#include <bits/stdc++.h>

using namespace std;

void test_case()
{
    int n;
    cin >> n;

    for (int x = 1; x < n; x++)
    {
        for (int y = 1; y < n; y++)
        {
            for (int z = 1; z < n; z++)
            {
                if (x + y + z == n && x != y && y != z && x != z && x % 3 != 0 && y % 3 != 0 && z % 3 != 0)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        test_case();
    }
    return 0;
}