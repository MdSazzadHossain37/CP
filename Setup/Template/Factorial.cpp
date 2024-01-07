#include <iostream>
#include <vector>
#define ll long long
using namespace std;
ll factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    __int128 i = n, fact = 1;
    while (i > 1)
    {
        fact = fact * i;
        i--;
    }
    return fact;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    ll n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}