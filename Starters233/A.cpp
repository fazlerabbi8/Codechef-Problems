#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n < 5)
    {
        cout << n * 100 << "\n";
    }
    else if (n >= 5)
    {
        cout << n * 85 << "\n";
    }
}

int main()
{
    solve();
}