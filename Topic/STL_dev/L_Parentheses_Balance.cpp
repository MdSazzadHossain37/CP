#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test_case()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        /* code */
        stack<char> st;
        string s;
        // cin >> s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && (s[i] == ')' || s[i] == ']'))
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        if (st.size() != 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    // cin.ignore();

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}