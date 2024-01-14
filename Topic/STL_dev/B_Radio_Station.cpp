#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    ll n, m;
    cin >> n >> m;
    string name, ip;
    map<string, string> mp;
    while (n--)
    {
        cin >> name >> ip;
        mp[ip] = name;
    }
    string command_name, command_ip;
    while (m--)
    {
        cin >> command_name >> command_ip;
        command_ip.erase(command_ip.begin() + command_ip.size() - 1);
        cout << command_name << " " << command_ip << "; #" << mp[command_ip] << "\n";
        // cout << command_ip << "\n";
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