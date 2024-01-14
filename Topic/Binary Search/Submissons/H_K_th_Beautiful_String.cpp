#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check_position(ll mid, ll k, ll n)
{
    mid = n - mid;
    ll temp = (mid * (mid + 1)) / 2;
    return (temp >= k);
}
/*
    aaabb--1
    aabab
    aabba--2
    abaab
    ababa
    abbaa--3
    baaab
    baaba
    babaa
    bbaaa--4

    from last 9
    so n-9==11(let n=20)
    so
 */
void test_case()
{
    ll n, k;
    cin >> n >> k;
    ll left = 1, right = n;
    while (left < right)
    {
        ll mid = (left + right + 1) >> 1;
        if (check_position(mid, k, n))
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    ll temp = n - left - 1;
    ll second = (temp * (temp + 1)) / 2;
    second = n - (k - second - 1);
    // cout << left << " " << temp << " " << n - (k - second - 1) << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (i == left || i == second)
            cout << "b";
        else
            cout << "a";
    }
    cout << "\n";
}
/*
0000 0101
first we will find first occurence of the left most b and then we will calculate the position for
right most b;
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}