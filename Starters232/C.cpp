#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, long long> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i] - (i + 1)]++;
    }

    long long pairs = 0;
    for (auto &[key, cnt] : freq)
    {
        pairs += cnt * (cnt - 1) / 2;
    }

    cout << pairs << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}