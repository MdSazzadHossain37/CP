#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int get_random(int low, int high)
{
    return uniform_int_distribution<int>(low, high)(rng);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = get_random(1, 10);
    cout << tc << "\n";
    while (tc--)
    {
        int n = get_random(1, 10);
        cout << n << "\n";
    }

    return 0;
}