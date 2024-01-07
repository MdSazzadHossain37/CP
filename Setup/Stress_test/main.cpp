#include <bits/stdc++.h>

using namespace std;

void validator(int n, int x, int y, int z)
{
    assert(x + y + z == n && x != y && y != z && x != z && x % 3 != 0 && y % 3 != 0 && z % 3 != 0);
}

void test_case()
{
    int n;
    cin >> n;

    if (n < 6)
        cout << "NO\n";
    else
    {
        int x = 1, y = 2, z = n - 3;
        if (z % 3 == 0)
        {
            z -= 2;
            y += 2;
        }
        if (y >= z)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
        }
    }

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