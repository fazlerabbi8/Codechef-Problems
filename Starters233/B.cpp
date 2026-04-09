#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;

    int ifNisSmall = c * n;
    int ifMisSmall = c * m;
    if (n > m)
    {
        cout << ifMisSmall + (n - m) * a << "\n";
    }
    else
    {
        cout << ifNisSmall + (m - n) * b << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}