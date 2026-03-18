#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n % 3 == 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    solve(n);

    return 0;
}