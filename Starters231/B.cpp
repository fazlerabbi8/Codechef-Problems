#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;

    if (N % 2 == 0 && N % 5 == 0)
    {
        cout << abs(N - (N - 2)) << "\n";
    }
    else if (N % 2 != 0 && N % 5 != 0)
    {
        cout << abs(N - (N - 1)) << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}