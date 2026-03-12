#include <bits/stdc++.h>
using namespace std;

void solve(const vector<pair<int, int>>& pr, int n)
{
    int x = 1e5;
    for (int i = 0; i < n; i++)
    {
        if (x < pr[i].first)
        {
            x = pr[i].first;
        }
        if (x > pr[i].second)
        {
            x = pr[i].second;
        }
    }
    cout << x << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> pr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> pr[i].first >> pr[i].second;
        }

        solve(pr, n);
    }
}
