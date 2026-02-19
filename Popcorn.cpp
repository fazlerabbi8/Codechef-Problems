#include <bits/stdc++.h>
using namespace std;

void solve(int X)
{
    if (X >= 100)
    {
        int leftOverMoney = X - 100;
        int popcornCanBuy = leftOverMoney / 50;
        cout << popcornCanBuy << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int X;
    cin >> X;

    solve(X);

    return 0;
}