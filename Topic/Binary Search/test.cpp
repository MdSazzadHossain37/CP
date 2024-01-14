#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

void test_case()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    ll left = 0, right = n - 1, mx, counter = 0, i = 1, temp;
    while (left <= right)
    {
        mx = v[right];
        temp = mx * i;
        if (temp > d)
        {
            counter++;
            right--;
            i = 1;
        }
        else
        {
            i++;
            left++;
        }
    }
    cout << counter << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        test_case();
    }
}