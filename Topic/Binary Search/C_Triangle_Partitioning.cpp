#include <bits/stdc++.h>
#define ll long long
using namespace std;

double is_ratio(double ab, double ac, double bc, double ad)
{
    double ae, de, s1, s2, lta, sta, ratio, tarea;
    ae = (ad * ac) / ab;
    de = (ad * bc) / ab;
    s1 = (ad + de + ae) / 2.0;
    s2 = (ab + bc + ac) / 2.0;
    lta = sqrt(s2 * (s2 - ab) * (s2 - bc) * (s2 - ac));
    sta = sqrt(s1 * (s1 - ad) * (s1 - de) * (s1 - ae));
    tarea = lta - sta;
    ratio = sta / tarea;
    return ratio;
}

void test_case()
{
    double ab, ac, bc, ratio, ad;
    cin >> ab >> ac >> bc >> ratio;
    double low = 0.0, high = ab;
    for (int i = 0; i < 100; i++)
    {
        double mid = (low + high) / 2.0;
        ad = mid;
        if (is_ratio(ab, ac, bc, ad) > ratio)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout << fixed << setprecision(15) << ad << "\n";
}
/*
Here we can see that triangle ade and abc are similar triangle so, we can write (ad/ab)==(ae/ac)==(de/bc)
firstly we assume the value of ad then, we calculate the ratio of bdec(ade/bdec). As ans have to correct
upto 10^-6 fraction value we can not say mid+1 or mid-1 for high or low value because fraction value can
be between 0.0 to 0.99. So, we can not directly increase or decrease 1 from mid value of high and low
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}